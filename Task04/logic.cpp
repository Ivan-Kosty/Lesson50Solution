// Сумма элементов столбцов с экстремальными элементами
// [The Sum of elements of columns with extreme elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// высчитывает сумму элементов в тех столбцах заданной матрицы,
// которые содержат хотя бы один экстремальный элемент.
#include <iostream>
#include "logic.h"
using namespace std;
int sum_elements_of_columns_with_extreme_value(int** matrix, int n, int m) {
	if (n <= 0 || m <= 0 || matrix == nullptr) {
		return 0;
	}
	int min_val = matrix[0][0];
	int max_val = matrix[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (matrix[i][j] < min_val) {
				min_val = matrix[i][j];
			}
			if (matrix[i][j] > max_val) {
				max_val = matrix[i][j];
			}
		}
	}
	int sum = 0;
	for (int j = 0; j < m; j++) {
		bool has_extreme = false;
		for (int i = 0; i < n; i++) {
			if (matrix[i][j] == min_val || matrix[i][j] == max_val) {
				has_extreme = true;
				break;
			}
		}
		if (has_extreme) {
			for (int i = 0; i < n; i++) {
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}