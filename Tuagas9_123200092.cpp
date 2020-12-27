#include <iostream>

using namespace std;

int main()
{
    int jumlah, selisih;
    int maximal, minimal;
    float rata, total;

    cout << "Masukan banyak angka : ";
    cin >> jumlah;

    int bilangan[jumlah];

    for (int i=0; i<jumlah; i++){
        cout << "Angka ke-"<<i+1<<" :";
        cin >> bilangan[i];
    }

    cout << endl;
    cout << "_____Hasil_______"<<endl;
    cout << "Deret       : ";

    for (int i=0; i<jumlah; i++){
        cout << bilangan[i] << " ";
    }
    cout << endl;

    maximal= bilangan[0];
    minimal= bilangan[0];
    for (int i=0; i<jumlah; i++){
        if (maximal < bilangan[i]){
            maximal = bilangan[i];
        } else if(minimal > bilangan[i]){
            minimal = bilangan[i];
        }
    }

    cout << "Maksimum    : "<< maximal <<endl;
    cout << "Minimum     : "<< minimal << endl;

    for (int i=0 ; i<jumlah;i++){
        total = total+bilangan[i];
    }

    rata=total/jumlah;
    cout << "Rata-Rata   : "<<rata<<endl;

    selisih= maximal-minimal;
    cout << "Selisih max : "<<selisih;

    return 0;
}
