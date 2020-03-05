/*
use user to input number for finding a desired factorial
use 
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	long double
		i, fact = 1, number;

	cout << "Please enter a number:\t";
	cin >> number;

	for (i = 1; i <= number; i++)
	{
		fact = fact * i;
	}
	cout << number << "! is: " << fact << endl;

	return 0;

}

