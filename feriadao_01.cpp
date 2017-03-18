#include <iostream>
#include <time.h>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main ()

{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    float matriz[3][3];
    float l1;
    float l2;
    float l3;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand()%10+1;
            cout << "[" << matriz[i][j] << "]";
        }
    cout << endl;
    }

    l1 = matriz[0][0] + matriz[0][1] + matriz[0][2];
    l2 = matriz[1][0] + matriz[1][1] + matriz[1][2];
    l3 = matriz[2][0] + matriz[2][1] + matriz[2][2];

    cout << endl;
    cout << "Soma das linhas:" << endl;
    cout << "linha 1: " << l1 << endl;
    cout << "linha 2: " << l2 << endl;
    cout << "linha 3: " << l3 << endl;
    cout << "Soma das colunas:" << endl;
    cout << "coluna 1: " << matriz[0][0] + matriz[1][0] + matriz[2][0] << endl;
    cout << "coluna 1: " << matriz[0][1] + matriz[1][1] + matriz[2][1] << endl;
    cout << "coluna 1: " << matriz[0][2] + matriz[1][2] + matriz[2][2] << endl;
    cout << "Soma Total: " << l1 + l2 + l3;

}
