#include <iostream>
int main()
{

	for (int i = 0; i <= 100; i++)
	{
		if (i % 3  == 0)
		{
			if (i % 5 == 0)
			{
				std::cout << "FuzzBuzz\n";
			}
			else
			{
				std::cout << "Fizz\n";
			}
		}
		else if (i % 5 == 0)
		{	
			if (i % 3 == 0)
			{
				std::cout << "FuzzBuzz\n";
			}
			else
				std::cout << "Buzz\n";
		}
		else
		{
			std::cout << i << "\n";
		}
	}

	system("pause");
	return 0;
}