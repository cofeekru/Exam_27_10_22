#include <iostream>
#include "Header.h"

#define TASK_4

#ifdef TASK_1
int main()
{
	long long int number;
	std::cin >> number;
	std::cout << factorial(number) << std::endl;

	return 0;
}
#endif // TASK 1
#ifdef TASK_2
int main()
{
	//Input complex numbers;
	ComplexNumber first_number, second_number;
	std::cout << "Enter first number:" << std::endl;
	std::cin >> first_number.real >> first_number.imaginary;

	std::cout << "Enter second number:" << std::endl;
	std::cin >> second_number.real >> second_number.imaginary;

	//For example: addition complex numbers and output;
	ComplexNumber answer;
	answer = division(first_number, second_number);
	std::cout << "Answer:" << std::endl;
	std::cout << answer.real << " " << answer.imaginary << "i" << std::endl;

	return 0;
}
#endif // TASK_2
#ifdef TASK_3
int main()
{
	
	
	int rows_1, columns_1, rows_2, columns_2;
	std::cout << "Enter size of first matrix:" << std::endl;
	
	std::cin >> rows_1 >> columns_1;

	std::cout << "Enter first matrix:" << std::endl;
	double** matrix_1 = new double*[rows_1];
	for (int i = 0; i < rows_1; i++)
	{
		matrix_1[i] = new double[columns_1];
		for (int j = 0; j < columns_1; j++)
		{
			std::cin >> matrix_1[i][j];
		}
	}
	
	std::cout << "Enter size of second matrix:" << std::endl;

	std::cin >> rows_2 >> columns_2;
	if (columns_1 != rows_2)
	{
		std::cout << "Error: incorrect matrix size" << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Enter second matrix:" << std::endl;
		double** matrix_2 = new double* [rows_2];
		for (int i = 0; i < rows_2; i++)
		{
			matrix_2[i] = new double[columns_2];
			for (int j = 0; j < columns_2; j++)
			{
				std::cin >> matrix_2[i][j];
			}
		}
		std::cout << std::endl;

		double** answer = MultiplicationOfMatrixs(matrix_1, matrix_2, rows_1, columns_1, rows_2, columns_2);
		for (int i = 0; i < rows_1; i++)
		{
			for (int j = 0; j < columns_2; j++)
			{
				std::cout << answer[i][j] << ' ';
			}
			std::cout << std::endl;
		}
		for (int i = 0; i < rows_1; ++i)
		{
			delete[] matrix_1[i];
		}
		for (int i = 0; i < rows_2; i++)
		{
			delete[] matrix_2[i];
		}
		delete[] matrix_1;
		delete[] matrix_2;
	}
	
	return 0;
}
#endif // TASK_3
#ifdef TASK_4
int main()
{
	list* MyList = nullptr;
	AddToList(&MyList, 6);
	AddToList(&MyList, 8);
	AddToList(&MyList, 9);
	AddToList(&MyList, 10);
	return 0;
}
#endif // TASK_4


