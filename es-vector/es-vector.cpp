#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 10> numeri = { 12, -25, 60, -8, 45, -30, 90, 18, -5, 7 };
    int temp;
    bool contieneNegativi = false;
    int contaMultipli10 = 0;
    for (int i = 0; i < numeri.size(); i++) {
        for (int j = i + 1; j < numeri.size(); j++) {
            if (numeri[j] < numeri[i]) {
                temp = numeri[j];
                numeri[j] = numeri[i];
                numeri[i] = temp;
            }
        }
    }
    cout << "Valori ordinati:" << endl;
    for (int i = 0; i < numeri.size(); i++) {
        if (numeri[i] < 0) {
            contieneNegativi = true;
        }
        if (numeri[i] % 10 == 0) {
            contaMultipli10++;
        }
        cout << numeri[i] << endl;
    }

    if (contieneNegativi) {
        cout << "Sono presenti numeri negativi." << endl;
    }
    else {
        cout << "Non sono presenti numeri negativi." << endl;
    }
    cout << "Numero di multipli di 10: " << contaMultipli10 << endl;
    return 0;
}
