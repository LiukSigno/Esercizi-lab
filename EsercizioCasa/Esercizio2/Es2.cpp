/*Scrivere un programma che chide all'utente due numeri e ne calcola somma, 
prodotto, differenza, divisione e resto*/

#include <iostream>

using namespace std;

int main()
{
    int Num1, Num2;
    int Somma, Prodotto, Differenza, Divisione;
    float Resto;
    cout <<"Inserire il primo numero" <<endl;
    cin >> Num1;
    cout <<"Inserire il secondo numero" << endl;
    cin >> Num2;

    Somma= Num1+Num2;
    Prodotto=Num1*Num2;
    Differenza=Num1-Num2;
    Divisione=Num1/Num2;
    Resto=Num1%Num2;

    cout<< "La somma e':" << Somma <<endl
        <<"\nLa differenza e':" << Differenza <<endl
        <<"\nIl prodotto e':" << Prodotto <<endl
        <<"\nLa divisione e':" << Divisione <<endl
        <<"\nIl resto e':" << Resto;
    return 0;
}