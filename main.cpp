#include <iostream>

double celTemp()
{
	std::cout << "Enter a Celsius temperature: ";
	double cel{};
	std::cin >> cel;
	return cel;
}

double fahTemp()
{
	std::cout << "Enter a Fahrenheit temperature: ";
	double fah{};
	std::cin >> fah;
	return fah;
}

double kelTemp()
{
	std::cout << "Enter a kelvin temperature: ";
	double kel{};
	std::cin >> kel;
	if (kel >= 0)
		return kel;
	else
		return -1;
}

char choosingTemp()
{
	std::cout << "Choose The known Temperature (CAPITAL LETTERS ONLY) " << "C/F/K \n";
	char temp{};
	std::cin >> temp;
	if (temp == 'C')
		return temp;
	else if (temp == 'F')
		return temp;
	else if (temp == 'K')
		return temp;
	else
		return -1;
}

void calculateCelToOthers(double cel)
{
	double fah{ (cel * 9.0 / 5.0) + 32 };

	double kel{ cel + 273.15 };

	std::cout << cel << 'C' << " converts to " << fah << "F " << "And " << kel << "K " << '\n';

}

void calculateFahToOthers(double fah)
{
	double cel{ (fah - 32) * (5.0 / 9.0) };
	double kel{ (fah - 32) * (5.0 / 9.0) + 273.15 };

	std::cout << fah << 'F' << " converts to " << cel << "C " << "And " << kel << "K " << '\n';
}

void calculateKelToOthers(double kel)
{
	double cel{ kel - 273.15 };
	double fah{ (kel - 273.15) * (9.0 / 5.0) + 32 };

	std::cout << kel << 'K' << " converts to " << cel << "C " << "And " << fah << "F " << '\n';
}

int main()
{
	char temp{ choosingTemp() };
	if (temp == -1)
	{
		std::cout << "Invaild Temperature\n";
		return 0;
	}
	if (temp == 'C')
	{
		double cel{ celTemp() };
		calculateCelToOthers(cel);
	}
	else if (temp == 'F')
	{
		double fah{ fahTemp() };
		calculateFahToOthers(fah);
	}

	else
	{
		double kel{ kelTemp() };
		if (kel == -1)
		{
			std::cout << "No Nagative Kelvin Numbers here\n";
			return 0;
		}
		calculateKelToOthers(kel);

	}
}