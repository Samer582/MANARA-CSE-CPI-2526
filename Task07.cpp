/*              Manara University
                2025 - 2026
                Computer Programming I
                Cybersecurity Engineering

Sum only odd numbers from 1 to N   */


#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (/* ODD CONDITION */) {
            sum += i;
        }
    }

    cout << sum;
}