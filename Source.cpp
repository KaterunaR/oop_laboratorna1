#include <iostream>
#include <cmath> 
using namespace std;

class FunctionB {
public:
    
    double y = 5.17;
    double z = -9.52;
    double x = 5.28;
    double b = ((1 + pow(cos(y - 2 * pow(x, 3)), 2)) / (2 + pow((abs(x)), 3 / 2) - pow(sin(pow((abs(z)), 1. / 2)), 1. / 2))) + pow((log(abs(z - y))), 2);

};

class FunctionA {
public:
    double y = 5.17;
    double z = -9.52;
    double x = 5.28;
    FunctionB b;
    double new_b = b.b; 

    double a = pow(y, 2) + (z + pow((sin(pow((abs(x + b.b)), 1. / 3))), 2)) / (pow(z, 2) + abs((pow(x, 2) + y) / (y + pow(x, 3) / 3)) - pow((log(abs(z))), 2));
};

int main() {

    FunctionB value_b;
    cout << "b = " << value_b.b << endl;

    FunctionA value_a;
    cout << "a = " << value_a.a;

    return 0;
}

