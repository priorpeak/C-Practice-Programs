#include <iostream>

using namespace std;

int main() {
    int num = 0;
    int n = 0;
    float remainder = 0;
    int digit = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Error checking
    if (!cin) {
        cout << "Invalid entry" << endl;
        return 0;
    }

    n = num;

    // Use modulo to get the remainder, add this to 1s place, 10s place, 100s place, etc.
    // The final number stored in digit will be the reverse of the originally input number
    while (num > 0) {
        remainder = num % 10;
        digit *= 10;
        digit += remainder;
        num /= 10;
    }

    // If the original number is the same as the value stored in digit, it is a number palindrome
    if (n == digit) {
        cout << "The number " << n << " is a palindrome." << endl;
    }
    else {
        cout << "The number " << n << " is not a palindrome." << endl;
    }

    return 0;
}