#ifndef NAVE_H
#define	NAVE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

class Sala;

using namespace std;

class Nave{
    string nome;
    vector<Sala*> salas;
    
    
public:
    Nave(string n);
    ~Nave();
    string getNome();
    void setNome();
    
private:
    
};

#endif	/* NAVE_H */

