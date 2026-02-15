#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeri = { 12, 47, 6, 82, 19, 4, 55, 10, 3, 68, 21, 14 };
    auto iteratore = find_if(numeri.begin(), numeri.end(),
        [](int valore) {
            return valore > 50;
        });
    if (iteratore != numeri.end()) {
        cout << "Numero maggiore di 50 trovato: "<< *iteratore << endl;
    }
    else {
        cout << "Nessun numero maggiore di 50 trovato" << endl;
    }
    while ((iteratore = find_if(numeri.begin(), numeri.end(),
        [](int valore) {
            return valore % 2 != 0;
        }))
        != numeri.end()) {
        numeri.erase(iteratore);
    }
    cout << "\nVettore finale (solo numeri pari):" << endl;
    for (int i = 0; i < numeri.size(); i++) {
        cout << numeri[i] << endl;
    }
    return 0;
}
