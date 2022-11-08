//Madison Jones			J00964128
//Page 259 Exercise 7	11/8/22

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a, b, c, discriminant, root1, root2;

	cout << "Consider the formula ax^2 + bx + c = 0."
		<<" Input the values for a, b, and c." << endl;
	cin >> a >> b >> c;
	if (a ==0){
		cout<< "Invalid entry." << endl;
	}
	else {
	discriminant = pow(b, 2) - (4 * a * c);
	}

	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);

	if (discriminant < 0) {
		cout << "Complex roots";
	}
	else if (discriminant == 0) {
		cout << "The single root is " << root1;
	}
	else {
		cout << "Two real roots" << endl;
		cout << "- First root " << root1;
		cout << "- Second root " << root2;
	}
	
	return 0;
}
