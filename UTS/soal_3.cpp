#include <iostream>
using namespace std;

int main(){
    system("cls");

    string mahasiswa, nim, ketentuan[3];
    cout << "Nama Mahasiswa    : "; getline(cin, mahasiswa);
    cout << "NIM               : "; getline(cin, nim);
    cout << "Nilai Mata Kuliah : \n";

    string n = "Nama Mahasiswa    : " + mahasiswa + "\nNIM               : " + nim + "\nNilai Mata Kuliah : \n";
    string matkul[] = {"Algoritma dan Pemrograman   : ", "Probabilitas dan Statistika : ", "Sistem Operasi              : "};

    int nilai[3], i = 0;
    float jumlah = 0;
    while(i < 3){
        cout << " " << matkul[i]; 
        cin >> nilai[i];

        if((nilai[i] >= 0) && (nilai[i] <= 59)){
            ketentuan[i] = "Tidak Lulus. Silakan Ulangi di Tahun Depan!";
        }
        else if((nilai[i] >= 60) && (nilai[i] <= 100)){
            ketentuan[i] = "Lulus";
        }
        else{
            cout << "Nilai tidak valid\n";
            system("pause");
            system("cls");
            cout << n;
            i = -1;
        }
        jumlah = jumlah + nilai[i];
        i++;
    }

    cout << endl;
    for(int j = 0; j < 3; j++){
        cout << matkul[j] << ketentuan[j] << endl;
    }
    cout << "Nilai Rata-rata Semester ini : " << jumlah / 3.0;
}