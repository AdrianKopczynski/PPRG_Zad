#include <iostream> 
using namespace std;

int main (){
    int x;
    cout << "Podaj liczbe calkowita" << endl;
    cin >> x;
    if (x%2==1 || x%2==-1){
        cout << "Podana liczba jest nieparzysta." << endl;
    }   
    else{
        if(x==0){
            cout << "Podana liczba jest zerem (żadna)." << endl;
        }
        else{
            cout << "Podana liczba jest parzysta." << endl;
        }
    }
    return 0;
}