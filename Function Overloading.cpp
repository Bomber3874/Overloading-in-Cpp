/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;

class Calculator {
public:

    int add(int a, int b) {
        cout << "Adding 2 integers: " << a << " + " << b << " = ";
        return a + b;
    }
    
    int add(int a, int b, int c) {
        cout << "Adding 3 integers: " << a << " + " << b << " + " << c << " = ";
        return a + b + c;
    }
    
    float add(float a, float b) {
        cout << "Adding 2 floats: " << a << " + " << b << " = ";
        return a + b;
    }
    
    double add(double a, double b) {
        cout << "Adding 2 doubles: " << a << " + " << b << " = ";
        return a + b;
    }
    
    string add(string a, string b) {
        cout << "Concatenating 2 strings: \"" << a << "\" + \"" << b << "\" = ";
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << calc.add(5, 10) << endl << endl;
    cout << calc.add(2, 4, 6) << endl << endl;
    cout << calc.add(3.5f, 2.7f) << endl << endl;
    cout << calc.add(10.5, 20.3) << endl << endl;
    cout << calc.add("Hello", " World!") << endl;
    
    return 0;
}

/*Output
Adding 2 integers: 5 + 10 = 15

Adding 3 integers: 2 + 4 + 6 = 12

Adding 2 floats: 3.5 + 2.7 = 6.2

Adding 2 doubles: 10.5 + 20.3 = 30.8

Concatenating 2 strings: "Hello" + " World!" = Hello World!
*/


