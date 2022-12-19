#include <iostream>
#include "lib.h"
using namespace std;


int main() {
    char m[10][20];
    char nome[20];

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<20; j++)
        {
            m[i][j]=' ';
            nome[j]=' ';
            // \0 indica fine della parola
        }
    }

    for(int i=0; i<10; i++){
        cin >> m[i];
    }
    cin >> nome;

    return verifica(m, nome);
}





