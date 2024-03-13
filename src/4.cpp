#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numA;
    int numB;
    int op;
    bool progRunning = true;

    while (progRunning) {
        cout << "Enter a number 1-4 to select an operation (0 to quit):\n\t1 - Addition\n\t2 - Subtraction\n\t3 - Multiplication\n\t4 - Division\n\n>> ";
        cin >> op;
        switch (op) {
            case 1:
                //Addition
                break;
            case 2:
                //Subtraction
                break;
            case 3:
                //Multiplication
                break;
            case 4:
                //Division
                break;
            case 0:
                //Division
                progRunning = false;
                break;
            default:
                cout << "Bad input!\n";
        }
    }
}