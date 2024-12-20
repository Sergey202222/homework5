#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[10]{ 5, 10, 25, 4, 7, 40, 100, 125, 300, 22 };
	std::cout << "������: ";
	for (int element : arr)
	{
		std::cout << element << ' ';
	}
	std::cout << '\n';
	int minimum{ arr[0] }, maximum{ arr[0] };
	for (int element : arr)
	{
		if (element < minimum)
		{
			minimum = element;
		}
		if (element > maximum)
		{
			maximum = element;
		}
	}
	std::cout << "����������� �������: " << minimum << '\n';
	std::cout << "������������ �������: " << maximum << '\n';
	return EXIT_SUCCESS;
}