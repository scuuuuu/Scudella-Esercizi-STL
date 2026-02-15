#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeri = { -12, 8, -4, 33, 0, -25, 17, 42, -1, 6 };
    auto iteratore = find_if(numeri.begin(), numeri.end(),
        [](int valore) {
            return valore >= 0;
        });
    if (iteratore != numeri.end()) {
        cout << "Numero non negativo trovato: "<< *iteratore << endl;
    }
    iteratore = find_if(numeri.begin(), numeri.end(),
        [](int valore) {
            return valore > 30;
        });
    if (iteratore != numeri.end()) {
        cout << "Numero maggiore di 30 trovato: "<< *iteratore << endl;
    }
    while ((iteratore = find_if(numeri.begin(), numeri.end(),
        [](int valore) {
            return valore < 0;
        }))
        != numeri.end()) {
        numeri.erase(iteratore);
    }
    cout << "\nVettore finale (senza numeri negativi):" << endl;
    for (int i = 0; i < numeri.size(); i++) {
        cout << numeri[i] << endl;
    }
    return 0;
}
