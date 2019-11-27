#include <iostream>
#include <string>

using namespace std;

float calculator(int *);

int main() {
    string grade;
    int GPA [5] = { };
    float finalGPA;

    // Take grades as input for all five classes
    for (int i = 0; i <= 4; i++) {
        cout << "Class " << i + 1 << ": ";
        cin >> grade;

        if (grade == "A") {
            GPA[i] = 4.0;
        }
        else if (grade == "A-") {
            GPA[i] = 3.7;
        }
        else if (grade == "B+") {
            GPA[i] = 3.3;
        }
        else if (grade == "B") {
            GPA[i] = 3.0;
        }
        else if (grade == "B-") {
            GPA[i] = 2.7;
        }
        else if (grade == "C+") {
            GPA[i] = 2.3;
        }
        else if (grade == "C") {
            GPA[i] = 2.0;
        }
        else if (grade == "C-") {
            GPA[i] = 1.7;
        }
        else if (grade == "D") {
            GPA[i] = 1.0;
        }
        else if (grade == "F") {
            GPA[i] = 0;
        }
        else {
            cout << "Invalid response" << endl;
            break;
        }
    }

    // Call to function
    finalGPA = calculator(GPA);

    cout << "GPA: " << finalGPA << endl;

    return 0;
}

float calculator(int *GPA) {
    float finalGPA = 0;

    // Add up each of the GPA equivalents and calculate the average
    for (int i = 0; i <= 4; i++) {
        finalGPA += GPA[i];
    }

    return finalGPA /= 5;
}