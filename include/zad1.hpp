#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Warzywo
class Warzywo{
private:
    std::string nazwa;
    double cena;
    int kolor;
    inline static unsigned liczba_warzyw;
public:
    Warzywo(const std::string& n, double c, int k) :nazwa(n), cena(c), kolor(k) {
        liczba_warzyw++; 
    }
    ~Warzywo() { liczba_warzyw--; }
    void opis(std::ostream& arg) const {
        arg << nazwa << ": " << cena << ", " <<  kolor << std::endl;
    }

    unsigned getVeg(){return liczba_warzyw;}
};

inline unsigned Warzywo::liczba_warzyw = 0;
