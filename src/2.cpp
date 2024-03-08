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

    // Waaay better than using an if statement
    polarity = (number == abs(number));
    even = (2%number != 0);

    // Now, output stuff
    cout << "The number is ";
    if (polarity) {
        cout << "positive";
    }
    else {
        cout << "negative";
    }
    cout << ".\nIt is also ";

    if (even) {
        cout << "even.";
    }
    else {
        cout << "odd.";
    }
    cout << "\n";
    return 0;
}