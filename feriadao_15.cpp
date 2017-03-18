#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

int main()

{
    setlocale(LC_ALL, "PORTUGUESE");

    string palavra;
    int i = 0;
    int menu;

    while (menu != 3) {
    do {
        cout << "Menu" << endl;
        cout << "Aperte 1 para codificar uma cadeia de caractéres" << endl;
        cout << "Aperte 2 para descodificar uma cadeia de caractéres" << endl;
        cout << "Aperte 3 para sair" << endl;
        cin >> menu;
    }while(menu != 1 && menu != 2 && menu != 3);

    if (menu == 1) {
        cout << "Digite uma cadeia de caractéres: ";
        cin >> palavra;


    }

}
