#include <stdio.h>
#include <stdlib.h>
#include <time.h>


    struct Race{
        int numbreOflaps;
        int currentLap;
        char firstPlaceDriverName[50];
        char firstPlaceRaceCarClor[50];
    };

    struct RaceCar{
        char driveName[10];
        char raceCarColor;
        int totalLapTime;
    };

    int random(){
        int i, n;
        time_t t;
        n = 1;
        /* Intializes random number generator */
       srand((unsigned) time(&t));
       /* Print 5 random numbers from 0 to 49 */
       for( i = 0 ; i <n ; i++ ) {
          return 1 + rand() % 2;
       }
    }

    void printFirstPlaceAfterLap(){
        struct Race race;
        struct RaceCar racecar;

//        for(int i=1;i<2;i++)
            printf("Apres le tour numero %d \n",random());
//        printf("La première place est occupée par : %s \t dans la voiture de course %s",race.driveName,race.raceCarColor);
    }
    printIntro(){
        printf("Bienvenue a notre evenement principal, les fans de course numerique !\n");
        printf("J'espere que tout le monde a pris son gouter car nous allons commencer !\n");
        printf("\n");

    };

    void printCountDown(){
        printf("Coureurs prets ! Dans... \n");
        for(int i=5;i>=1;i--){
            printf("%d \n",i);
            sleep(1);
        }
        printf("Course ! \n");
    };


int main()
{
    printIntro();
    printCountDown();
    printFirstPlaceAfterLap();
    return 0;
}
