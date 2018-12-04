#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    float p;
    cout << "Program Konversi Nilai \n" ;
    cout << "Masukkan nilai :" ;
    cin >> p ;

    if(p>=40 && p==50){
        cout << "A" ;
    }
    else
        if(p>=30 && p<=39){
        cout << "B" ;
        }
    else
        if(p>=20 && p<=29){
        cout << "C" ;
        }
    else
        if(p>=10 && p<=19){
        cout << "D" ;
        }
    else
    if(p>=1 && p<=9){
        cout << "E" ;
    }


    return 0;
}
