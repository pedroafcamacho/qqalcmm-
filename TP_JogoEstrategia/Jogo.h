#ifndef MENU_H
#define	MENU_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

class Jogo{
    int dificuldade;
public:
    Jogo();
    ~Jogo();
    string impimeMenu();
};




#endif	/* MENU_H */

