#include <iostream>
#include <cmath>
using namespace std;

int main(){
    system("cls");

    int n;
    cout << "Kode bilangan bulat non-negatif\n";
    cout << "Kode : "; cin >> n;

    if(n >= 1) {
        bool hasil = false;
        for(int i = 0; pow(2, i) <= n; i++){
            int kode = pow(2, i);
            
            if(kode == n){
                cout << "ya";
                hasil = true;
                break;
            }
        }

        if(!hasil){
            cout << "tidak";
        }
    }
    else cout << "Bukan bilangan bulat non-negatif";
}