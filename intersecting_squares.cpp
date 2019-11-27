#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x1L = 0;
    int y1L = 0;
    int area1 = 0;

    int x2L = 0;
    int y2L = 0;
    int area2 = 0;

    cout << "Enter the information for the first square" << endl;

    // Get user inputs
    cout << "x-coordinate: ";
    cin >> x1L;

    cout << "y-coordinate: ";
    cin >> y1L;

    cout << "area: ";
    cin >> area1;

    cout << "Enter the information for the second square" << endl;

    cout << "x-coordinate: ";
    cin >> x2L;

    cout << "y-coordinate: ";
    cin >> y2L;

    cout << "area: ";
    cin >> area2;

    // Calculate the square root of the area to in order to find the bottom right vertices of each square
    int sq1 = sqrt(area1);
    int sq2 = sqrt(area2);

    int x1R = x1L + sq1;
    int y1R = y1L - sq1;

    int x2R = x2L + sq2;
    int y2R = y2L - sq2;

    // Check if the second square is to the left of the first square
    if (x1L > x2R || x2L > x1R) {
        cout << "THE SQUARES DO NOT INTERSECT" << endl;
    }

    // Check if the second square is to the right of the first square
    else if (y1L < y2R || y2L < y1R) {
        cout << "THE SQUARES DO NOT INTERSECT" << endl;
    }

    // If none of the above parameters are met, the squares must intersect
    else {
        cout << "THE SQUARES INTERSECT" << endl;
    }

    return 0;
}