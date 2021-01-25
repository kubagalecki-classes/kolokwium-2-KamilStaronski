#pragma once

#include "catch.hpp"
#include "chrup.hpp"

// tutaj klasy Ogorek, Zielony i Kiszony
class Ogorek {
public:
    virtual std::string chrup()=0;

};

class Zielony: public Ogorek {
public:
    std::string chrup() override {return chrupZielony();};
};

class Kiszony : public Ogorek {
public:
    std::string chrup() override { return chrupKiszony(); };

};

std::string jedzOgorek(Ogorek* wskaznik) {
    if(wskaznik==dynamic_cast<Zielony*>(wskaznik)){ return "Zielony: " +wskaznik->chrup(); }
    else { return "Kiszony: " + wskaznik->chrup();    }
}
