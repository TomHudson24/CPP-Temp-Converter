#include <iostream>
#include "TempConverter.h"

int main() 
{
	TempConverter tempConverter;
	double value;
	double output;
	int choice;
	std::cout << "Do you want to convert from Fahrenheit or Celsius?\nPress 1 for Fahrenheit or 2 for Celsius\n";
	std::cin >> choice;
	
	if(choice == 1)
	{

		std::cout << "Please input temperature in Fahrenheit to convert it to Celsius: \n";
		std::cin >> value;
		output = tempConverter.convertFToC(value);
		std::cout << "temperature in Celsius is " << output << "\370C\n";
	}else if(choice == 2)
	{
		std::cout << "Please input temperature in Celsius to convert it to Fahrenheit: \n";
		std::cin >> value;
		output = tempConverter.convertCToF(value);
		std::cout << "temperature in Fahrenheit is " << output << "\370F\n";
	}else
	{
		return 0;
	}


	

	return 0;
}