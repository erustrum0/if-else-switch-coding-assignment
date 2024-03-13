#include <iostream>
#include <cmath>
using namespace std;

void segfault() {
    // hee hee
    int* pointer = nullptr;
    *pointer = -0;
}

int calculate(int op, int numA, int numB) {
    switch (op) {
        case 1:
            return numA + numB;
            break;
        case 2:
            return numA - numB;
            break;
        case 3:
            return numA * numB;
            break;
        case 4:
            return numA / numB;
            break;
    }
    segfault();
    return 0;
}

int main() {
    int numA;
    int numB;
    int result;
    int op;
    bool progRunning = true;

    while (progRunning) {
        cout << "Enter a number 1-4 to select an operation (0 to quit):\n\t1 - Addition\n\t2 - Subtraction\n\t3 - Multiplication\n\t4 - Division\n\n>> ";
        cin >> op;
        switch (op) {
            // Fallthrough case my beloved
            case 1:
                // Addition
            case 2:
                // Subtraction
            case 3:
                // Multiplication
            case 4:
                // Division
                cout << "Please enter the first operator: ";
                cin >> numA;
                cout << "Please enter the second operator: ";
                cin >> numB;
                result = calculate(op, numA, numB);
                cout << "\nThe result of your calculation is " << result << ".\n\n";
                break;
            case 0:
                // Break from loop
                progRunning = false;
                break;
            case 139:
                // Segfault because why not
                segfault();
                break;
            default:
                cout << "Bad input!\n";
        }
    }
    return 0;
}