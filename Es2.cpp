#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeri = { 5, 18, 21, 40, 7, 9, 60, 11, 3, 100, 8, 2 };

    // Ricerca del primo numero maggiore di 50
    auto iteratore = find_if(numeri.begin(), numeri.end(),
        [](int valore) {
            return valore > 50;
        });

    if (iteratore != numeri.end()) {
        cout << "Numero maggiore di 50 trovato: "
            << *iteratore << endl;
    }
    else {
        cout << "Nessun numero maggiore di 50 trovato." << endl;
    }

    // Rimozione di tutti i numeri dispari
    while ((iteratore = find_if(numeri.begin(), numeri.end(),[](int valore) return valore % 2 != 0})!= numeri.end())) {
        numeri.erase(iteratore);
    }
    cout << "\nVettore finale (solo numeri pari):" << endl;
    for (int i = 0; i < numeri.size(); i++) {
        cout << numeri[i] << endl;
    }
    return 0;
}
