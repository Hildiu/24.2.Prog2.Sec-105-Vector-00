#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
  vector<int> v;
  int numero;

    do {
        cout << "Numero [con 0 termina ] : ";
        cin >> numero;
        if(numero!=0)
            v.push_back(numero);
    }while(numero!=0);
    cout << "\nRecorrido con indice\n";
    for(int i=0; i<v.size(); i++)
    cout << setw(4) << v[i];
    cout << "\nRecorrido usando el puntero begin y el puntero end\n";
    for(auto iter = begin(v); iter != end(v); iter++)
        cout << setw(4) << *iter;
    cout <<"\n";
    cout << "\nRecorrido iternando \n";
    for( const auto & i:v)
        cout << setw(4) << i;
    cout << "\nAhora cambiamos cada valor de arreglo sumandole 12\n";
    for(auto & iter:v)
        iter = iter + 12;
   //--- imprime el vector
    for( const auto & i:v)
        cout << setw(4) << i;
    return 0;
}
