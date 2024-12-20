#include <iostream>

int main()
{
	int arr[10]{ 5, 10, 25, -3, 100, 99, 48, -1, 0, 12 };
	for (int element{}; element < 9; ++element)
	{
		std::cout << arr[element] << ", ";
	}
	std::cout << arr[9];
	return EXIT_SUCCESS;
}