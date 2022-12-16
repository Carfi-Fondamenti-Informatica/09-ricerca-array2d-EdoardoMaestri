
#include <iostream>
#include "lib.h"
using namespace std;


int verifica ( char m[10][20] , char nome[20])
{
    for(int i=0; i<10; i++)
    {
        bool found = true;
        for(int j=0; j<20; j++)
        {
            if(nome[j] != m[i][j])
            {
                found = false;
                break;
            }
        }
        if(found) {
            cout << i+1;
            return 0;
        }
        else
        {
            cout << "non presente";
            break;
        }
    }

    return 1;
}
