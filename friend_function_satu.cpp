#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    string nama;
public:
    friend void setNama(Mahasiswa &a, string);
};

void setNama(Mahasiswa &a, string b)
{
    a.nama = b;
    cout << a.nama;
}

int main()
{
    Mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}