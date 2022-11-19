//
// Created by Andrea Petrucci on 19/11/22.
//

#ifndef ELABORATO_LISTASPESA_ARTICOLO_H
#define ELABORATO_LISTASPESA_ARTICOLO_H

#include <iostream>
#include <string>

using namespace std;

class Articolo{
public:
    Articolo(const string &descrizione, const string &categoria, int qnt = 1);

    const string &getDescrizione() const;

    const string &getCategoria() const;

    int getQnt() const;

    bool isStato() const;

    const string getStato();

    void setQnt(int qnt);

    void setStato(bool stato);

    string to_string();

protected:
    const string descrizione;
    const string categoria;
    int qnt;
    bool stato = false;
};


#endif //ELABORATO_LISTASPESA_ARTICOLO_H
