#include <iostream>
using namespace std;

int x;
int y;
int result;
int k;

int powint( int x, int y)
{
    int result=1;
    for( k=0; k<y; k++)
    {
       result*=x; 
    }
    return result;
}

int main()
{
    cout << "Inserire la base della potenza" << endl;
    cin >> x;
    cout << "Inserire l'esponente della  potenza" << endl;
    cin >> y;

    cout<< "La potenza e':" << result;
}
  