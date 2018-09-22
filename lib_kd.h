#include <iostream>

#ifndef LIB_KD_H_INCLUDED
#define LIB_KD_H_INCLUDED
int dodaj(int a, int b);
int odejmij(int a, int b);
#endif // LIB_KD_H_INCLUDED
using namespace std;
class muzyka
{
public:
    string nazwa;
    void podaj()
    {
        cout<<"Nazwa zespolu: "<<endl;
        cin>>nazwa;
    }
    void wypisz()
    {
        cout<<"Zespol to: "<<nazwa<<endl;
    }
};
