#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string kode_biner;
    cout << "input kode biner : "; cin >> kode_biner;

    int panjang_kode = kode_biner.length();
    int hasil_akhir = 0;

    for(int i = 0; i < panjang_kode; i++){
        if((kode_biner[i] != '0') && (kode_biner[i] != '1')){
            cout << "Pesan Rusak!";
            break;
        }
        else if(kode_biner[i] == '1'){
            hasil_akhir += pow(2, panjang_kode - 1 - i);
        }
    }
    cout << "Angka desimal dari biner " << kode_biner << " adalah = " << hasil_akhir;
}