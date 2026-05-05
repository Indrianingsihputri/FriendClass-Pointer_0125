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