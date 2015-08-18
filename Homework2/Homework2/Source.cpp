#include <iostream>
int sum;
int main()
{
	for (int n = 1; n < 5; n++)
	{
		std::cout << "Type you " << n << "number:" << std::endl;
		std::cin >> sum;
		sum++;
	}

}