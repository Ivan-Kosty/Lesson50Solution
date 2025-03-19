// Сумма элементов [The sum of elements]
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.
#include <iostream>
#include "logic.h"
using namespace std;
int sum_main_and_second_diagonales_elements(int** matrix, int n) {
	if (n <= 0) {
		return 0;
	}
	if (matrix == nullptr) {
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		if (matrix[i] == nullptr) {
			return 0;
		}
		sum += matrix[i][i];
		if (i != n - 1 - i) {
			sum += matrix[i][n - 1 - i];
		}
	}
	return sum;
}