#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>
pid_t pid;

#include "jogo.h"

void handler1 (int sig) {   
    
}


int main( int argc, char *argv[ ] )
{
    int choice;
    int playerchoice; 
    int score = 0 ;
<<<<<<< HEAD
    int status;
    pid_t p;
    signal(SIGUSR1, handler1);
=======
>>>>>>> 6da4ee53737068a058928d9f1d0ecbf5c432defc
    printf("Welcome to the SHELDON COOPER'S game\n");
    printf("\n\n");
    printf("As regras são:\n");
    printf("A tesoura corta o papel\n");
    printf("O papel cobre a pedra!\n");
    printf("A pedra esmaga o lagarto!\n");
    printf("O lagarto envenena o Spock!\n");
    printf("O Spock derrete a tesoura!\n");
    printf("A tesoura decapita o lagarto!\n");
    printf("O lagarto come o papel!\n");
    printf("O papel refuta o Spock!\n");
    printf("O Spock vaporiza a pedra!\n");
    printf("A pedra amassa a tesoura!\n");
    printf("\n\n");

    /* ciclo gera um numero de 1 a 5 */  
    printf("\nTesoura=0,\n Pedra=1,\n Papel=2,\n Spock=3,\n Lagarto= 4\n\n");
   
    do {
        srand(time(NULL));
        choice = rand() %5; //gera numero aleatorio entre 0 e 4
        printf("O Sheldon Cooper já jogou! Tenta fazer melhor!\n");
        printf(">");
        scanf("%d", &playerchoice);
        //printf("%d", playerchoice);
        //printf("%d", choice);

        if(playerchoice == TESOURA)
            printf("Jogaste TESOURA!\n");
        else if ( playerchoice == PEDRA)
            printf("Jogaste PEDRA!\n");
            else if ( playerchoice == PAPEL )
            printf("Jogaste PAPEL!\n");
            else if ( playerchoice == SPOCK)
            printf("Jogaste SPOCK!\n");
            else if ( playerchoice == LIZZARD)
            printf("Jogaste LIZZARD!\n");

        if( playerchoice == TESOURA )
        {
            if(choice == TESOURA)
                printf("O Sheldon jogou TESOURA. Foi um empate! Tenta outra vez!\n");
            else if( choice == PEDRA)
                printf("O Sheldon ganhou! Jogou PEDRA!\n");
            else if( choice == PAPEL ){
                printf("Ganhaste ao Sheldon! Ele jogou PAPEL. Mais um ponto!");
                score++; 
            }
            else if ( choice == SPOCK )
                printf("O Sheldon ganhou! Jogou SPOCK!\n");
            else if ( choice == LIZZARD )
            {
                printf("Ganhaste ao Sheldon! Ele jogou LIZZARD. Mais um ponto!\n");
                score++;
            }
        }else if( playerchoice == PEDRA){
            if ( choice == TESOURA )
            {
                printf("Ganhaste ao Sheldon! Ele jogou TESOURA. Mais um ponto!\n");
                score++;
            }
            else if( choice == PEDRA)
                printf("O Sheldon jogou PEDRA. Foi um empate! Tenta outra vez!\n");
            else if ( choice == PAPEL )
                printf("O Sheldon ganhou! Jogou PAPEL!\n");
            else if ( choice == SPOCK)
                printf("O Sheldon ganhou! Jogou SPOCK!\n");
            else if ( choice == LIZZARD) {
                printf("Ganhaste ao Sheldon! Ele jogou TESOURA. Mais um ponto!\n");
                score++;
            }
        }else if ( playerchoice == PAPEL){
            if ( choice == TESOURA )
            printf("O Sheldon ganhou! Jogou TESOURA!\n");
            else if ( choice == PAPEL )
            printf("O Sheldon jogou PAPEL. Foi um empate! Tenta outra vez!\n");
            else if (choice == PEDRA ){
                printf("Ganhaste ao Sheldon! Ele jogou PEDRA. Mais um ponto!\n");
                score++;
            }
            else if ( choice == SPOCK ){
                printf("Ganhaste ao Sheldon! Ele jogou SPOCK. Mais um ponto!\n");
                score++;
            }
            else if ( choice == LIZZARD )
                printf("O Sheldon ganhou. Jogou LIZZARD!\n");
        }else if ( playerchoice == SPOCK){
            if ( choice == TESOURA ){
                printf("Ganhaste ao Sheldon! Ele jogou TESOURA. Mais um ponto!\n");
                score++;
            }
            else if ( choice == PAPEL )
                printf("O Sheldon ganhou. Jogou PAPEL.\n");
            else if (choice == PEDRA ){
                printf("Ganhaste ao Sheldon! Ele jogou PEDRA. Mais um ponto!\n");
                score++;
            }
            else if ( choice == SPOCK )
                printf("O Sheldon jogou SPOCK. Foi um empate! Tenta outra vez!\n");
            else if ( choice == LIZZARD )
                printf("O Sheldon ganhou. Jogou LIZZARD!\n");
        }else if ( playerchoice == LIZZARD){
            if ( choice == TESOURA )
                printf("O Sheldon ganhou! Jogou TESOURA!\n");
            else if ( choice == PAPEL ){
                printf("Ganhaste ao Sheldon! Ele jogou PAPEL. Mais um ponto!");
                score++; 
            }
            else if (choice == PEDRA )
                printf("O Sheldon ganhou! Ele jogo PEDRA!\n");
            else if ( choice == SPOCK ){
                 printf("Ganhaste ao Sheldon! Ele jogou SPOCK. Mais um ponto!");
                score++; 
            }
            else if ( choice == LIZZARD )
                printf("O Sheldon jogou LIZZARD. Foi um empate! Tenta outra vez!\n");
        }
    } while(1);

    exit(score);

}
