#include <iostream>
using namespace std;

class Mahasiswa{
    public: // akses modifier
    string nama;
    int umur;
    string jurusan;

    void output(){
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};
class Matakuliah{
    private:
        string kodeMk;
        string namaMk;
        int sks;
    public:
        void input(){
           cout << "Kode Mk: ";
           cin >> kodeMk;
           cout << "Nama Mk: ";
           cin >> namaMk;
           cout << "SKS: ";
           cin >> sks; 
        }
        void output(){
            cout << "Kode Mk: " << kodeMk << endl;
            cout << "Nama Mk: " << namaMk << endl;
            cout << "SKS: " << sks << endl;
        }

};
int main(){
    
}