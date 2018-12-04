 #include <iostream>
using namespace std;
int main ()
{

    float phi, luas, keliling;
    int r;

    cout<<"masukan panjang jari-jari: ";
    cin>> r;
    phi=3.14;
    luas=phi*r*r;
    keliling=2*phi*r;
    cout<<"luas lingkaran = "<<luas<<endl;
    cout<<"keliling lingkaran = "<<keliling;
    return 0;
}
