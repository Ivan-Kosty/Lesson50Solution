// Последний локальный минимум
// [The last local minimum]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает местоположение последнего локального минимума. 
#include <iostream>
#include "logic.h"
using namespace std;
void get_last_local_minimum(int** matrix, int n, int m, int* ii, int* jj) {
    if (n <= 0 || m <= 0 || matrix == nullptr) {
        *ii = 0;
        *jj = 0;
        return;
    }

    int last_i = -1, last_j = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool is_local_min = true;

            if (i > 0 && matrix[i][j] >= matrix[i - 1][j]) {
                is_local_min = false;
            }
            if (i < n - 1 && matrix[i][j] >= matrix[i + 1][j]) {
                is_local_min = false;
            }
            if (j > 0 && matrix[i][j] >= matrix[i][j - 1]) {
                is_local_min = false;
            }
            if (j < m - 1 && matrix[i][j] >= matrix[i][j + 1]) {
                is_local_min = false;
            }

            if (is_local_min) {
                last_i = i + 1; 
                last_j = j + 1;
            }
        }
    }

    if (last_i == -1 || last_j == -1) {
        *ii = 0;
        *jj = 0;
    }
    else {
        *ii = last_i;
        *jj = last_j;
    }
}
//Test06 failed