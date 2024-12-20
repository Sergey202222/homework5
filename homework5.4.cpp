#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int arr[]{ 6, 5, 8, 1, 4, 3, 7, 10, 9, 2 };
	std::cout << "Массив до сортировки: ";
	for (int element : arr)
	{
		std::cout << element << ' ';
	}
	bool bubble{};
	do
	{
		bubble = false;
		for (int element{ 9 }; element >= 1; --element)
		{
			if (arr[element] < arr[element - 1])
			{
				int swapElement = arr[element];
				arr[element] = arr[element - 1];
				arr[element - 1] = swapElement;
				bubble = true;
			}
		}
	} while (bubble);
	std::cout << "\nМассив после сортировки: ";
	for (int element : arr)
	{
		std::cout << element << ' ';
	}
	return EXIT_SUCCESS;
}