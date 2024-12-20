#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int matrix[3][6]{ {5, 7, 4, 3, 1, 2}, {6, 8, 10, 9, 12, 11}, {14, 13, 18, 16, 15, 17} };
	std::cout << "Массив:\n";
	for (auto &arr : matrix)
	{
		for (int element : arr)
		{
			std::cout << element << '\t';
		}
		std::cout << '\n';
	}
	int minimumRow{}, minimmumColumn{}, maximumRow{}, maximumColumn{};
	for (int row{}; row < 3; ++row)
	{
		for (int column{}; column < 6; ++column)
		{
			if (matrix[row][column] < matrix[minimumRow][minimmumColumn])
			{
				minimumRow = row;
				minimmumColumn = column;
			}
			if (matrix[row][column] > matrix[maximumRow][maximumColumn])
			{
				maximumRow = row;
				maximumColumn = column;
			}
		}
	}
	std::cout << "Индекс минимального элемента: " << minimumRow << ' ' << minimmumColumn << '\n';
	std::cout << "Индекс максимального элемента: " << maximumRow << ' ' << maximumColumn << '\n';
	return EXIT_SUCCESS;
}