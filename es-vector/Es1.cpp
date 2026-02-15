#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeri = { 18, -6, 25, -12, 4, 0, 9, -2, 33, 7 };
    auto iteratore = numeri.begin();

    while ((iteratore = find_if(numeri.begin(), numeri.end(),[](int valore) { return valore < 0; }))!= numeri.end()) {
        cout << "Numero negativo trovato e rimosso: "<< *iteratore << endl;
        numeri.erase(iteratore);
    }

    cout << "\nVettore finale:" << endl;
    for (int i = 0; i < numeri.size(); i++) {
        cout << numeri[i] << endl;
    }

    return 0;
}
