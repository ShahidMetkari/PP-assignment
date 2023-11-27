#include <iostream>
using namespace std;

void add(int a, int b) {
    cout << "Sum = " << (a + b);
}

void add(double a, double b) {
    cout << endl << "Sum = " << (a + b);
}

int main() {
    add(10, 2);       // Calls the int version
    add(5.3, 6.2);    // Calls the double version
    return 0;
}
