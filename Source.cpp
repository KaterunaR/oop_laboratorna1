#include <iostream>
#include <math.h>
using namespace std;

class Function {
public:
	double y = 5.17;
	double z = -9.52;
	double b;

	void Calculate() {
		//b
		for (double x = -1; x <= 1; x += 0.2) {
			b = ((1 + pow(cos(y - 2 * pow(x, 3)), 2)) / (2 + pow((abs(x)), 3 / 2) - pow(sin(pow((abs(z)), 1. / 2)), 1. / 2))) + pow((log(abs(z - y))), 2);
			cout << "b = " << b << endl;
		}
		//a
		for (double x = -1; x <= 1; x += 0.2) {
			double a = pow(y, 2) + (z + pow((sin(pow((abs(x + b)), 1. / 3))), 2)) / (pow(z, 2) + abs((pow(x, 2) + y) / (y + pow(x, 3) / 3)) - pow((log(abs(z))), 2));
			cout << "a = " << a << endl;
		}
	}
};

int main() 
{
	Function a_b;
	a_b.Calculate();

	return 0;
}