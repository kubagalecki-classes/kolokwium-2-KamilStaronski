#include "zad1.hpp"

#include <exception>
#include <iostream>
#include <vector>

// tutaj funkcja jedzOstatnieWarzywa
void jedzOstatnieWarzywa(const std::vector<Warzywo> &wek, unsigned n, std::ostream& os) {
    if (n <= wek.size()) {
       throw std::logic error{"error};
    }
        for (int i = wek.size() - 1; i >= wek.size() - n - 1; i--) {
            os[i].opis(wek);
        }
}
