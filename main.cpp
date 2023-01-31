#include <iostream>

using namespace std;

int rozmiar, zakresod, liczba, zakresdo;

    

int main()
{
    cout<<"Podaj rozmiar";
    cin >> rozmiar;

    cout<<"Podaj zakres od";
    cin >> zakresod;
    
     cout<<"Podaj zakres do";
    cin >> zakresdo;
    
    cout<<"Podaj liczbe";
    cin >> liczba;
    
    int tabA[rozmiar];
    int tabB[rozmiar];
    srand(time(NULL));
    
    for (int i=0; i<=rozmiar-1; i++)
    {
        tabA[i]= zakresod+(rand()%(zakresdo-zakresod+1));
        
    }
    
    
    return 0;
}
