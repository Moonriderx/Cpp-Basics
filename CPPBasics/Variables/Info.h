#pragma once

/** Variables store data. They are used like containers for storing data. Each variable is stored in the memory. The difference between all kinds of
variables are how much memory they occupy.

1) int allows us to store integers in a given range; integers are 4bytes large; The actual size depends on the compiler so it may differ slightly
integers can store data from -2147483648 to 2147483647.

This limit is directly linked to the size of the variable (4kb). It's how much data this variable can fit in.
2) short
3) long
4) long long - 8bytes

there are more modifications on these above.

5) char - used for storing characters. This data type "char" can store also numbers, but it's used for storing characters. Overall C++ has very few rules to follow

6) float and double - They are used to store decimal point numbers;
floats are 4bytes large, doubles are 8bytes large;

7) bool - it will give true or false result; it only takes 1 byte in memory. It actually represents only 1 or 0, so it may take 1bit, but
since the references are in memory, we cannot represent variables like 1 bit.
The smart trick to do is that we can store 8 booleans into 1 byte of memory.

std::cout << sizeof(int) << std::endl; will show us exactly how bytes take the int or any other given parameter in the function.




*/