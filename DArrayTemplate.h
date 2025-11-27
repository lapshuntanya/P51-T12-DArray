#pragma once
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;


//1 - Виділення дин памʼяті під 2-х вимірний масив
template<typename T>
void createMemory(T**& matrix, int row, int col) {
    //1 - Виділення памʼяті під масив покажчиків (адрес на одновимірні масиви)
    matrix = new T*[row];
    //2 - Для кожного покажчика видаляємо памʼять під масив значень
    for (int i = 0; i < row; i++) {
        matrix[i] = new T[col];
    }
}

//2 - Заповнення масиву випадковими числами
template<typename T>
void randArray(T** matrix, int row, int col, int a = 1, int b = 10) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix[i][j] = rand() % (b - a + 1) + a;
        }
    }
}

//3 - Виведення на екран
template <typename T>
void printArray(T** matrix, int row, int col, int w = 5) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout.width(w);
            cout << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

//4 - Звільнення памʼяті
template<typename T>
void destroyMemory(T**& matrix, int &row, int& col) {
    //Звільнення памʼяті
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    matrix = nullptr;
    row = col = 0;
}