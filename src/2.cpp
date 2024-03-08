//Outputs user inputted number.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    bool polarity = false;
    bool even = false;
    cout << "Enter a number: ";
    cin >> number;
    // We got number, now do hacky magic stuff on it

    if (number == abs(number)) {
        polarity = true;
    }
    if (2%number != 0) {
        even = true;
    }

    if 
    return 0;
}