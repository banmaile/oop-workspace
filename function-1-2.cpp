#include <iostream>
using namespace std;

// void modifyArray(double* array, int size, double value) {
//     for (int i = 0; i < size; i++) {
//         array[i] += value;
//         // or *(array+i) += value;           
//     }
// }

void modifyArray(double* array, int size, double value) {
    *(array + size) = value;         
}




