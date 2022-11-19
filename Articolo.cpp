//
// Created by Andrea Petrucci on 19/11/22.
//
#include "Articolo.h"

Articolo::Articolo(const string &descrizione, const string &categoria, int qnt) : descrizione(descrizione), categoria(categoria), qnt(qnt) {}

const string &Articolo::getDescrizione() const {
    return descrizione;
}

const string &Articolo::getCategoria() const {
    return categoria;
}

int Articolo::getQnt() const {
    return qnt;
}

bool Articolo::isStato() const {
    return stato;
}

void Articolo::setQnt(int qnt) {
    Articolo::qnt = qnt;
}

void Articolo::setStato(bool stato) {
    Articolo::stato = stato;
}

string Articolo::to_string() {
    return "Descrizione: "+descrizione+"\nCategoria: "+categoria+"\nQuantità: "+std::to_string(qnt)+"\nStato: "+getStato();
}

const string Articolo::getStato() {
    return (stato) ? "Comprato" : "Mancante";
}

