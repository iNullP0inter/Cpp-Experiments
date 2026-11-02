#include <iostream>

double itemPrice()
{
	std::cout << "Enter the item price: ";
	double price{};
	std::cin >> price;
	if (price > 0)
		return price;
	else
		return -1;
}

double taxPercent()
{
	std::cout << "Enter the TAX% : ";
	double tax{};
	std::cin >> tax;
	if (tax > 0)
		return tax;
	else
		return -1;
}

void calculateFinalPrice(double p, double t)
{
	double tv{ p * (t / 100) };

	double fp{ p + tv };
	
	std::cout << "The final price is: " << fp << '\n';

}

int main()
{
	double p{ itemPrice() };
	if (p == -1)
	{
		std::cout << "Invaild Number\n";
		return 0;
	}

	double t{ taxPercent() };
	if (t == -1)
	{
		std::cout << "Invaild Number\n";
		return 0;
	}

	calculateFinalPrice(p, t);
}