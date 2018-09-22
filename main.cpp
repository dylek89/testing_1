#include <iostream>
#include <conio.h>
#include "lib_kd.h"

using namespace std;

int main()
{
    cout << "Wynik dodawania to: "<< dodaj(4,5)<< endl;
    cout << "Wynik odejmowania to: "<< odejmij(4,5)<< endl;
    muzyka metal;
    metal.podaj();
    metal.wypisz();
    getch();
    return 0;
}
