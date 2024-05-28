#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of lines

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k <= i; k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
