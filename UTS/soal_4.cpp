#include <iostream>
using namespace std;

int main(){
    system("cls");

    string mantra;
    cout << "Masukkan Mantra : "; getline(cin, mantra);

    int i = 0, banyak = 0;
    while (i < mantra.length()){
        char huruf = tolower(mantra[i]);
        if(huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u'){
            banyak++;
        }
        i++;
    }

    if(banyak == 0) cout << "Mantra tidak valid! Tidak mengandung vokal.";
    else cout << "Kekuatan Mantra : " << banyak;
}