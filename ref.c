#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "ref.h"

int verify(char* arg) {
  int num;
  if ((num = atoi(arg)) == 0 && arg != "0"){
    printf("[ERROR] INVALID!\n");
    printf("-h for help!\n\n");
    exit(4); // Erro Invalid Arguments
  }
  return num;
}

int main (int argc, char* argv[], char* envp[] ){

    int opt, champtime , w8time ; 

    // environment 

    int MAXPLAYERS = DEFAULT_MAXPLAYERS;
    char* GAMEDIR = DEFAULT_GAMEDIR;
    char* secondenv; // aux 

    // read 

    if (argc <= 1 || argc < 5 && (strcmp(argv[1], "-h") != 0)) {
    printf("[ERROR - MISSING ARGUMENTS]!\n");
    printf("-h for help!\n\n");
    exit(3); 
  }

  while((opt = getopt(argc, argv, "hd:w:")) != -1) {
    switch(opt) {
      case 'd':
        champtime = verify(optarg);
        break;
      case 'w':
        w8time = verify(optarg);
        break;
      case 'h':
        printf("-d <int> -> CHAMPION DURATION .\n");
        printf("-w <int> -> WAIT TIME\n\n");
        exit(0);
        break;
      default:
        printf("[ERROR -> -h for help!\n\n");
        break;
    }
  } 

// taking care of env 

  if((secondenv=getenv("MAXPLAYERS")) != NULL) {
    MAXPLAYERS = atoi(secondenv);
  } else {
    printf("[ALERTA] 'MAXPLAYERS' NOT LOADED. USING DEFAULT '%d'.\n", MAXPLAYERS);
  }

  if(getenv("GAMEDIR") != NULL) {
    GAMEDIR = getenv("GAMEDIR");
  } else {
    printf("[ALERTA] 'GAMEDIR' NOT LOADED. USING DEFAULT '%s'.\n", GAMEDIR);
  }

  exit(0); // Exit successfully
}
