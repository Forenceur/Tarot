#include "carte.h"

Carte::Carte(Valeur pValeur, CouleurCarte pCouleur){
    this->value = pValeur;
    this->mCouleur = pCouleur;
}

bool Carte::operator<(Carte carte){
    return this->value < carte.value;
}

bool Carte::operator==(Carte carte){
    return this->value == carte.value;
}

bool Carte::operator!=(Carte carte){
    return !(*this == carte);
}

bool Carte::operator<=(Carte carte){
    return *this < carte || *this == carte;
}

bool Carte::operator>=(Carte carte){
    return !(*this < carte);
}

bool Carte::operator>(Carte carte){
    return *this != carte && *this >= carte;
}
