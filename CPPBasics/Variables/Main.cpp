#include <iostream>

int main()
{
	int variable = 5;
	std::cout << variable << std::endl;

	variable = 11; // re-asigning the value
	std::cout << variable << std::endl;

	unsigned int positive = 20; // unsigned means that the integer will always be positive number
	std::cout << positive << std::endl;

	char a = 'B';
	char b = 66; // this will print the same, "B", because it's get the numeric value and std::cout knows to print character because of the data type we passed


	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	float dv = 5.5f;
	double d = 1.2;

	std::cout << dv << std::endl;
	std::cout << d << std::endl;

	bool isTrue = true;
	bool isFalse = false;

	std::cout << isTrue << std::endl;
	std::cout << isFalse << std::endl;

    

}