#include <iostream>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    float d1, d2;
    float s1, s2;

public:
    friend class BelahKetupat;

    void input() {
        cout << "\nInput Layang-Layang\n";
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1: "; cin >> s1;
        cout << "Sisi 2: "; cin >> s2;
    }

    float luas() {
        return 0.5f * d1 * d2;
    }

    float keliling() {
        return 2.0f * (s1 + s2);
    }

    void output() {
        cout << "\n=== Layang-Layang ===" << endl;
        cout << "Luas      : " << luas() << endl;
        cout << "Keliling  : " << keliling() << endl;
    }
};

class BelahKetupat {
private:
    float d1, d2;
    float s;

public:
    void input() {
        cout << "\nInput Belah Ketupat\n";
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi     : "; cin >> s;
    }

    float luas() {
        return 0.5f * d1 * d2;
    }

    float keliling() {
        return 4.0f * s;
    }

    void output() {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Luas      : " << luas() << endl;
        cout << "Keliling  : " << keliling() << endl;
    }

    float hitungKelilingLayang(const LayangLayang &l) {
        return 2.0f * (l.s1 + l.s2);
    }
};

int main() {
    // Deklarasi object
    LayangLayang ll;
    BelahKetupat bk;

    // Input & output Layang-Layang
    ll.input();
    ll.output();

    // Input & output Belah Ketupat
    bk.input();
    bk.output();

    // Contoh akses friend dari BelahKetupat ke data private LayangLayang
    cout << "\nKeliling Layang-Layang (akses friend BelahKetupat) : "
         << bk.hitungKelilingLayang(ll) << endl;

    return 0; // akhir program
}