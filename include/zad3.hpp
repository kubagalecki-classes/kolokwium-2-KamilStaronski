#pragma once

#include "zad1.hpp"

#include <functional>

// tutaj szablon gotujZupe
template <typename T>
unsigned gotujZupe(const Warzywo& w, const T& obiekt){
    return obiekt.gotujZupe(w)*obiekt.gotujZupe(w);
}
