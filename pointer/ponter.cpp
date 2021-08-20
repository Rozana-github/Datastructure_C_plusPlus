// pointer creation
#include <iostream>
using namespace std;

int main()
{
	int n = 5;
	cout << n << endl;
	// how can we check the address of a variable
	cout << &n << endl;

	// how can we use the pointer?

	int *ptr = &n;
	// pointer prt will hold the address of n
	cout << ptr << endl;
	cout << *ptr << endl;

	*ptr = 10;

	cout << n << endl; // now n is 10

	// pointer will have the same type of variable of the have.
}