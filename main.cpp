#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int row = 0, col = 0;
    cout << "Input row: " ; cin >> row; //5
    cout << "Input col: " ; cin >> col; //3

    int** matrix = nullptr;
    //1 - Виділення памʼяті під масив покажчиків (адрес на одновимірні масиви)
    matrix = new int*[row];
    //2 - Для кожного покажчика видаляємо памʼять під масив значень
    for (int i = 0; i < row; i++) {
        matrix[i] = new int[col];
    }


    //Заповнення масиву
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matrix[i][j] = rand()%10;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //Звільнення памʼяті
    for (int i = 0; i < row; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}