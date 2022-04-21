#include<iostream>
#include<string>

float goper(std::string oper)
{
	float numa{};
	float numb{};
	float numc{};

	if (oper == "s")
	{
		std::cout << "Square selected" << std::endl;
		std::cout << "Enter width and legth (one num): ";
		std::cin >> numa;

		numc = numa * numa;
	}

	else if (oper == "r")
	{
		std::cout << "Rectangle selected" << std::endl;
		std::cout << "Enter width and length (two nums): ";
		std::cin >> numa;
		std::cin >> numb;

		numc = numa * numb;
	}
	
	else if (oper == "p1")
	{
		std::cout << "Pythagoreon thery selected" << std::endl;
		std::cout << "Enter the two 90 degree sides: ";
		std::cin >> numa;
		std::cin >> numb;

		numa = numa * numa;
		numb = numb * numb;

		numc = numa + numb;
	}

	else if (oper == "p2")
	{
		std::cout << "Reverse Pythagoreon theory selected" << std::endl;
		std::cout << "Enter the diagonal side and a 90 degree side: ";
		std::cin >> numa;
		std::cin >> numb;

		numc = numa - numb;
	}
	
	return(numc);
}
