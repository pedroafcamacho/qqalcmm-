#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

#include "Jogo.h"

Jogo::Jogo(){}
Jogo::~Jogo(){}

string Jogo::impimeMenu(){
    stringstream oss;
    
    oss << "op1"<<endl;
    oss << "op2"<<endl;
    
    return oss.str();
}

