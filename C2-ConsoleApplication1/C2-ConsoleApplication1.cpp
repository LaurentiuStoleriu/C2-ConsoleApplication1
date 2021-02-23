#include <iostream>

void schimba_cu_pointeri(int *a, int *b)
{
	std::cout << "la inceput a = " << *a << "   b = " << *b << std::endl;
	int c;
	c = *a;
	*a = *b;
	*b = c;
	std::cout << "la sfarsit a = " << *a << "   b = " << *b << std::endl;
}
void schimba_cu_referinte(int &a, int &b)
{
	std::cout << "la inceput a = " << a << "   b = " << b << std::endl;
	int c;
	c = a;
	a = b;
	b = c;
	std::cout << "la sfarsit a = " << a << "   b = " << b << std::endl;
}

int main()
{
	int x = 12, y = 99;
	std::cout << "x = " << x << "   y = " << y << std::endl;
	//schimba_cu_pointeri(&x, &y);
	schimba_cu_referinte(x, y);
	std::cout << "x = " << x << "   y = " << y << std::endl;
}
