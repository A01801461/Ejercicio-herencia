#ifndef PINGUINO_H
#define PINGUINO_H

#include "ave.h"
#include <string>
using std::string;

class Aguila : Ave
{
private:
    string nombre;

public:
    void volar();
    Aguila(string n);
};

#endif