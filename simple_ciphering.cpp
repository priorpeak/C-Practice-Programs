#include <iostream>

using namespace std;

int main() {
    char input, output;
    int num = 0;

    // Error check for a non-char input
    cout << "Enter a character: ";
    cin >> input;
    if (input > 122 || input < 65) {
        cout << "Error, please check your input" << endl;
        return 0;
    }

    // Take in num as operation
    cout << "Operations:\n" <<
        "1. Change case\n" <<
        "2. Reverse alphabet\n" <<
        "3. Encrypt\n" <<
        "Enter an operation: ";
    cin >> num;

    // Match operation input to necessary functions
    switch(num) {
        case 1:
            if (input < 91) {
                output = input + 32;
            }
            else {
                output = input - 32;
            }
            break;
        case 2:
            if (input < 91) {
                output = 90 - (input - 65) + 32;
            }
            else {
                output = 122 - (input - 97) - 32;
            }
            break;
        case 3:
            if (input > 116) {
                output = input - 52;
            }
            else if (input > 84 && input < 91) {
                output = input + 12;
            }
            else {
                output = input + 6;
            }
            break;
        default:
            cout << "Error, please check your input" << endl;
            return 0;
    }

    // Output
    cout << "Output: " << output << endl;

    return 0;
}