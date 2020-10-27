//  Scrivere un programma completo che chiede all'utente tre numeri interi e ne calcola il prodotto
#include <iostream>
#include <cmath>
using namespace std;

int a,b,c;
int Prodotto;
int main ()
{
     cout << "inserire valore 1" <<endl;
     cin >> a;
     cout << "Inserire valore 2" <<endl;
     cin >> b;
     cout << "Inserire valore 3" <<endl;
     cin >> c;

    Prodotto= a*b*c;
    cout <<"Il prodotto e': " <<Prodotto;
    return 0;
}