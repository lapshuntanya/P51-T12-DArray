#include "DArrayTemplate.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    srand(time(0));
    int row = 0, col = 0;
    cout << "Input row: " ; cin >> row; //5
    cout << "Input col: " ; cin >> col; //3

    int** m = nullptr;


    createMemory(m, row, col);
    randArray(m, row, col, -10, 10);
    printArray(m, row, col);
    destroyMemory(m, row, col);

    cout << "M = " << m << " size: " << row << ", " << col << endl;
    return 0;
}