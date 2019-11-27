#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    int mult1 = 1;
    int mult2 = 1;

    cout << "Enter two numbers between 0-100: ";
    
    // Error check to see if input nums are outside of specified range
    cin >> num1;
    if (num1 < 0 || num1 > 100) {
        cout << "Error: Number is outside of specified range." << endl;
        return 0;
    }

    cin >> num2;
    if (num2 < 0 || num2 > 100) {
        cout << "Error: Number is outside of specified range." << endl;
        return 0;
    }

    // Initialize vars to store ternary values
    int num1_base3 = 0;
    int num2_base3 = 0;

    // Preserve original input
    int num1_original = num1;
    int num2_original = num2;

    // Convert first input to Base 3
    while (num1 > 0) {
        num1_base3 += (num1 % 3) * mult1;
        mult1 *= 10;
        num1 /= 3;
    }

    // Convert second input to Base 3
    while (num2 > 0) {
        num2_base3 += (num2 % 3) * mult2;
        mult2 *= 10; 
        num2 /= 3;
    }

    // Initialize a counter
    int counter = 0;

    // Convert ternary nums to strings for indexing
    ostringstream convert1;
    convert1 << num1_base3;
    string ternary_string_1 = convert1.str();

    ostringstream convert2;
    convert2 << num2_base3;
    string ternary_string_2 = convert2.str();

    // Check each "bit" against one another by indexing the string equivalent
    if (ternary_string_1.length() >= ternary_string_2.length()) {
        for (int i = 0; i < ternary_string_1.length(); i++) {
            if (ternary_string_1[i] != ternary_string_2[i]) {
                counter++;
            }
        }
    }
    else if (ternary_string_1.length() < ternary_string_2.length()) {
        for (int i = 0; i < ternary_string_2.length(); i++) {
            if (ternary_string_1[i] != ternary_string_2[i]) {
                counter++;
            }
        }
    }

    // Print
    cout << "Hamming distance between " << num1_original << " and " << num2_original << " when numbers are in ternary format is: " << counter << endl;

    return 0;
}