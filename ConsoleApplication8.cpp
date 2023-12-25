#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArr(int** arr, int rows, int cols, int min, int max) { // заполняем двумерный динамический массив случайными числами от min до max
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = (rand() % (max - min + 1)) + min;
        }
    }
}

void displayArray(int** arr, int rows, int cols) { // показываем двумерный динамический массив
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;
    std::cout << "Enter the number of lines: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    int** array = new int* [rows];  // выделяем память под двумерный массив
    for (int i = 0; i < rows; i++) {
        array[i] = new int[cols];
    }

    srand(time(0)); // заполняем массив случайными числами от 10 до 50
    fillArr(array, rows, cols, 10, 50);

    displayArray(array, rows, cols); // показываем массив

    for (int i = 0; i < rows; i++) { // освобождаем память
        delete[] array[i];
    }
    delete[] array;

    return 0;
}