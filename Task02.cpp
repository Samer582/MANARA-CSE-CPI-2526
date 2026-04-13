/*              Manara University
                2025 - 2026
                Computer Programming I
                Cybersecurity Engineering

Count how many even numbers from 1 to N.
*/

#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (/* EVEN CONDITION */) {
            count++;
        }
    }

    cout << "Count = " << count;
}