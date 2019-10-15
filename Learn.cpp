#include <iostream>
#include <cmath>
#include "Constant.hpp"

void pressure()
{
	std::cout << "P = p * g * h" << std::endl;
	std::cout << "The density of a gas or fluid (kg/m^3) is: ";
	double p;
	std::cin >> p;
	std::cout << "The height (in meters) is: ";
	double h;
	std::cin >> h;
	std::cout << "The pressure is " << p * constant::gravity * h << " Pa." << std::endl;
}

void tension()
{
	std::cout << "T = (m * g) + (m * a)" << std::endl;
	std::cout << "The mass is (kg): ";
	double m;
	std::cin >> m;
	std::cout << "The acceleration is (m/s^2): ";
	double a;
	std::cin >> a;
	std::cout << "The tension is " << (m * constant::gravity) + (m * a) << " N." << std::endl;
}

void impulse()
{
	std::cout << "F = m * a" << std::endl;
	std::cout << "The mass is (kg): ";
	double m;
	std::cin >> m;
	std::cout << "The acceleration is (m/s^2): ";
	double a;
	std::cin >> a;
	std::cout << "The impulse is " << m * a << " N." << std::endl;
}

void ohm()
{
	std::cout << "V = I * R" << std::endl;
	std::cout << "The electric current is (in amperes): ";
	double i;
	std::cin >> i;
	std::cout << "The electrical resistance is (in ohms): ";
	double r;
	std::cin >> r;
	std::cout << "The voltage is " << i * r << " V." << std::endl;
}

void formulas()
{
	std::cout << "1. Pressure formula;\n2. Impulse formula;\n3. Tension formula;\n4. Ohm's law formula.\nChoose one of these: ";
	int a;
	std::cin >> a;
	if (a == 1)
	{
		pressure();
	}
	else if (a == 2)
	{
		impulse();
	}
	else if (a == 3)
	{
		tension();
	}
	else if (a == 4)
	{
		ohm();
	}
	else
	{
		std::cout << "Idi svoei dorogoi, stalker..." << std::endl;
	}
}

int main()
{
	formulas();
	return 0;
}