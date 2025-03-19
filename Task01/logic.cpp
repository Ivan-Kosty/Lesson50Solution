// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non-zero elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию (или программу), которая 
// вычисляет среднее арифметическое ненулевых элементов матрицы.
#include <iostream>
#include "logic.h"
using namespace std;

double calculate_arithmetical_mean_of_nonzero_elements(int** matrix, int n, int m) {
    if (n <= 0 || m <= 0|| matrix == nullptr) {
        return 0.0;
    }
    double sum = 0.0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
 
        if (matrix[i] == nullptr) {
            return 0.0;
        }

        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] != 0) {
                sum += matrix[i][j];
                ++count;             
            }
        }
    }
    if (count == 0) {
        return 0.0;
    }
    return sum / count;
}