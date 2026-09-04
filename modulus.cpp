#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error: Modulus by zero is not allowed." << endl;
    } else {
        cout << "The result of " << a << " modulus " << b << " is " << a % b << endl;
    }
    return 0;
}