#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
    } else {
        cout << "The result of dividing " << a << " by " << b << " is " << static_cast<double>(a) / b << endl;
    }
    return 0;
}