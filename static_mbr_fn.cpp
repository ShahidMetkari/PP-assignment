#include <iostream>
class MyClass {
public:
    static int myStaticVariable;
    static void myStaticFunction() {
std::cout << "The value of myStaticVariable is: " << myStaticVariable << std::endl;
    }
};
int MyClass::myStaticVariable = 42;
int main() {
    MyClass::myStaticFunction();
    return 0;
}
