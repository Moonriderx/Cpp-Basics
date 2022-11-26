/** Typically, we would want to create different behaviour in different classes. That way the code stays more tidy and we don't flood 
the main.cpp with thousands of lines */

#include <iostream>

void CustomPrint(const char* message) // Definition
{
	std::cout << message << std::endl;
}