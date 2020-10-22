#include <iostream>
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