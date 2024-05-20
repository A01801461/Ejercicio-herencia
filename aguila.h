#ifndef AGUILA_H
#define AGUILA_H

#include "ave.h"
#include <string>
using std::string;

class Aguila : Ave
{
private:
    string nombre;

public:
    void volar();
    Aguila(string n) : Ave(string n);
};

#endif