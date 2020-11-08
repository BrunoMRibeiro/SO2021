#ifndef REF_H
#define REF_H

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_MAXPLAYERS 7;
#define DEFAULT_GAMEDIR "";


struct REF {    
    int playerPID;
    int gamePID;
};


int verify();

#endif