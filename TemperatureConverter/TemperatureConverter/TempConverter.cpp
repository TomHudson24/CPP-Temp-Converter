#include "TempConverter.h"

double TempConverter::convertFToC(double temp){

	return tempCelsius = (temp - 32) / 1.8;
}
double TempConverter::convertCToF(double temp){
	return tempFahrenheit = (temp * 1.8) + 32;
}

double TempConverter::getCelsius(){

	return tempCelsius;
}
double TempConverter::getFahrenheit() {

	return tempFahrenheit;
}