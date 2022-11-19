#include <iostream>
#include "Articolo.h"

using namespace std;

int main() {
    Articolo tArticolo("Mele", "Frutta");
    cout << tArticolo.to_string() << endl;

    cout  << endl;

    tArticolo.setStato(true);
    cout << tArticolo.to_string() << endl;

    return 0;
}
