#include <iostream> 
using namespace std;

int main (){
    int x;
    cout << "Podaj liczbe calkowita" << endl;
    cin >> x;
    if (x<0){
        cout << "Podana liczba jest ujemna." << endl;
    }   
    else{
        if(x>0){
            cout << "Podana liczba jest dodatnia." << endl;
        }
        else{
            cout << "Podana liczba jest zerem." << endl;
        }
    }
    return 0;
}