// Количество строк с большим количество положительных элементов
// [The Number of rows with a large number of positive elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию(или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).
#include <iostream>
#include "logic.h"
using namespace std;
int count_rows_with_more_positive_values(int** matrix, int n, int m) {
    if (n <= 0 || m <= 0) {
        return 0;
    }
    if (matrix == nullptr) {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {

        if (matrix[i] == nullptr) {
            continue;
        }
        int positive_count = 0;
        int non_positive_count = 0;
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] > 0) {
                positive_count++;
            }
            else {
                non_positive_count++;
            }
        }
        if (positive_count > non_positive_count) {
            count++; 
        }
    }

    return count;
}