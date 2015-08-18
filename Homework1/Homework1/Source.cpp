
#include <iostream>
int y = 0;
int x;
int num1, num2, num3, num4, num5, num6, num7, sum;
int main()
{	
	// converting y into x = 100 1#
	if (y == 0)
	{
		x = 1000;
		std::cout << x << std::endl;
		std::cin.get();
	}
	std::cout << "Type in one number:";
	std::cin >> num1;
	std::cin.get();
	std::cout << "Type in your secand number:";
	std::cin >> num2;
	std::cin.get();
	// displaying the largest number 2#
	if (num1 < num2)
	{
		std::cout << num2;
		std::cin.get();
	}
	else
	{
		std::cout << num1;
		std::cin.get(); 
	}
	return 0;

}