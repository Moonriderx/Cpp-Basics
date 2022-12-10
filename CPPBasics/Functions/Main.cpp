/**
Functions are blocks of code. They are designed to perform a specific tasks and be reusable. We don't want to copy and paste code a lot of times

Copy / Pasting the code means that if we decide to adjust the code, we would need to make it in the original code. It can be pretty hard to maintain



*/

#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyNoParams()
{
	 std::cout << 12 + 5 << std::endl;
}

void PrintResult(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() // int main is a special function that does not require return 
{
	//int result = Multiply(2, 5);
	//MultiplyNoParams();
	//std::cout << result << std::endl;
	PrintResult(5 , 10);
	PrintResult(24 , 125);
	PrintResult(91259 , 125);
}

// When we call a function, the compiler generate a call instruction. Don't overwhelm with functions;
