//Swapping of two numbers with and without using third variable
#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Without using third variable
    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping (without third variable): " << a << " " << b << endl;

    // With using third variable
    cout << "Enter two numbers: ";
    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping (with third variable): " << a << " " << b << endl;

    return 0;
}