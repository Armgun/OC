#include<iostream>
#include<string>
#include "bind.h"

int main()
{
	std::cout << "Welcome to OpenCalc \nV: 1.5" << std::endl;
	
	std::string type;
	std::cout << "Type which type of maths you want (a or g): ";
	std::cin >> type;
	
	if (type == "g")
	{
		std::cout << "Welcome to geometry" << std::endl;
		std::cout << "Enter a type (s for square, r for 90 degree rectangle, p1 for Pythogareon theory and p2 for the reverse): ";
		
		std::string opers{gets()};
		
		std::cout << goper(opers) << std::endl;
	}

	else if (type == "a")
	{
		std::cout << "Welcome to algebra" << std::endl;
		std::cout << "Enter a aquation: ";

		double num1{getn()};
		std::string opers{gets()};
		double num2{getn()};

		std::cout << aoper(num1, opers, num2) << std::endl;
	}

	return(0);
}
