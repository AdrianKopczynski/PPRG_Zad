#include <iostream> 
using namespace std;

int pierwszysp(float a,float b, float c){
    if(a>b){
        if(a>c){
            cout << "Najwieksza liczba to " << a << " ." << endl;
        }
    }
    else{
        if(b>c){
            cout << "Najwieksza liczba to " << b << " ." << endl;
        }
        else{
            cout << "Najwieksza liczba to " << c << " ." << endl;
        }
    }
    return 0;
}

int drugisp(float a,float b, float c){
    if(a>b && a>c){
        cout << "Najwieksza liczba to " << a << " ." << endl;
    }
    else{
        if (b>c){
            cout << "Najwieksza liczba to " << b << " ." << endl;
        }
        else{
            cout << "Najwieksza liczba to " << c << " ." << endl;
        }
    }
    return 0;
}

int trzecisp(float a, float b, float c){
    float tab[2];
    float max = 0;
    tab[0] = a;
    tab[1] = b;
    tab[2] = c;
    for (int i=0;i<=2;i++){
        if (tab[i]>max) { max = tab[i];}
    }
    cout << "Najwieksza liczba to " << max << " ." << endl;
}

int main (){
    float x,y,z;
    cout << "Podaj liczbe 1" << endl;
    cin >> x;
    cout << "Podaj liczbe 2" << endl;
    cin >> y;
    cout << "Podaj liczbe 3" << endl;
    cin >> z;
    pierwszysp(x,y,z);
    drugisp(x,y,z);
    trzecisp(x,y,z);
    return 0;
}
