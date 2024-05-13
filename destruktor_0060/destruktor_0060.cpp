#include <iostream>
using namespace std;

class angka {
private:
    int* arr;
    int panjang;
public:
    angka(int); //Constuktor
    ~angka(); //Destruktor

    void cetakData();
    void isiData();
};
angka::angka(int i) { //Construktor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka :: ~angka() { // Destructor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}
