#include <iostream>

/**
preprocessor statements. This is the first thing that the compiler sees and does when receiving a source file.
It happens before the compilation begins.
Typically we include header files. What this does is that it finds the "iostream" file and takes all the needed data and transfers it here so we can
use it. To print stuff to our console we need a declaration for a function "cout" which lets us print to the console.

Header files does not get compiled by the compiler. Only the CPP files.
Header files gets included by preprocessor statement called "include"

CPP files are going to compile into a .obj file and the linker will use and glue these obj files into an working .exe at the end.
*/

int main()
{
std::cout << "Hello World" << std::endl;
}

/**

The main function is a must for each application. It acts like an "entry point". When we start our application, the computer is executing
the code in this main function. Typically, the code is executed in order (line by line)
Main function does not return any value.

This angular brackets in row 12, we can think of them as a "functions" 
*/