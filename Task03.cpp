/*              Manara University
                2025 - 2026
                Computer Programming I
                Cybersecurity Engineering

Keep taking numbers from the user until user enters 0, then print sum.*/

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    while (/* CONDITION */) {
        cin >> num;

        if (/* STOP CONDITION */) {
            break;
        }

        sum += num;
    }

    cout << "Sum = " << sum;
}