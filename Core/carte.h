#ifndef CARTE_H
#define CARTE_H

enum class CouleurCarte{
    CARREAU,
    PIQUE,
    TREFLE,
    COEUR,
    ATTOUT
};

enum class Valeur{
    AS = 1,
    DEUX = 2,
    TROIS = 3,
    QUATRE = 4,
    CINQ = 5,
    SIX = 6,
    SEPT = 7,
    HUIT = 8
};//probablement a abandonné à cause des atouts

class Carte
{
private:
    CouleurCarte mCouleur;
    Valeur value;

public:
    Carte(Valeur pValeur, CouleurCarte pCouleur);
    bool operator<(Carte carte);
    bool operator>(Carte carte);
    bool operator<=(Carte carte);
    bool operator>=(Carte carte);
    bool operator==(Carte carte);
    bool operator!=(Carte carte);
};

#endif // CARTE_H
