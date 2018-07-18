#include <iostream>


using namespace std;

//mendefenisikan class
class siswa {
    public:
//mendefenisikan fungsi namaSiswa
        void namaSiswa(string nama)
        {
            cout <<"Nama siswa : "<<nama<<endl;
        }
//mendefenisikan fungsi kelasSiswa
        void kelasSiswa(string kelas)
        {
            cout <<"Kelas Siswa : "<<kelas<<endl;
        }
//mendefenisikan fungsi jurusanSiswa
        void jurusanSiswa(string jurusan)
        {
            cout <<"Jurusan siswa : "<<jurusan<<endl;  
        }
        void NIMSiswa(string NIM)
        {
            cout <<"NIM siswa : "<<NIM<<endl;  
        }
};
    
int main(int argc, char** argv) {
    string nama, kelas, jurusan, NIM;

//instansiasi class siswa terhadap objek siswa
    siswa objsiswa;
    cout << "Isi Nama Kamu:";
    getline(cin, nama);

    cout << "isi kelas kamu: ";
    getline(cin, kelas);
    
    cout <<"Isi Jurusan: ";
    getline(cin, jurusan);

    cout <<"Isi NIM: ";
    getline(cin, NIM);

    cout <<"=================================================\n";
    
    objsiswa.namaSiswa(nama);
    objsiswa.kelasSiswa(kelas);
    objsiswa.jurusanSiswa(jurusan);
    objsiswa.NIMSiswa(NIM);
    cout <<"=================================================\n";
    return 0;
}