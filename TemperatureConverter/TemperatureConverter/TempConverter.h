#pragma once
class TempConverter
{
private:
	double tempFahrenheit = 0;
	double tempCelsius = 0;
public:
	double convertFToC(double temp);
	double convertCToF(double temp);

	double getCelsius();
	double getFahrenheit();

};

