#include<iostream>
#include<string>

float aoper(double numa, std::string oper, double numb)
{
	float num{};

	if (oper == "+")
	{
		num = numa + numb;
	}
	else if (oper == "-")
	{
		num = numa - numb;
	}
	else if (oper == "*")
	{
		num = numa * numb;
	}
	else if (oper == "/")
	{
		num = numa / numb;
	}

	return(num);
}
