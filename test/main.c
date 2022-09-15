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
        char driveName[20];
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

    printFirstPlaceAfterLap(){
        struct Race race[2];
        printf("Apres le tour numero %d \n",2);
            for(int i=0;i<2;i++){
                printf("Enter numbre Of laps : ");
                scanf("%d",&race[i].numbreOflaps);
                printf("Enter current Lap : ");
                scanf("%d",&race[i].currentLap);
                printf("Enter first Place Driver Name : ");
                scanf("%s",&race[i].firstPlaceDriverName);
                printf("Enter first Place Race Car Color : ");
                scanf("%s",&race[i].firstPlaceRaceCarClor);
            }
            for(int i=0;i<2;i++){
                if(race[i].currentLap == 2){
                    printf("La premiere place est occupee par : %s dans la voiture de course %s ",race[i].firstPlaceDriverName,race[i].firstPlaceRaceCarClor);
                }
            }
        }

//        void printCongratulation(struct Race race){
//                if(race.currentLap == 2){
//                    printf("Félicitons tous %s, dans la voiture de course %s, pour son incroyable performance.\n",rece.firstPlaceDriverName,race.firstPlaceRaceCarClor);
//                    printf("C'était vraiment une belle course et bonne nuit à tous ! \n");
//                }
//        }

        int calculateTimeToCompleteLap(){
        int vitesse;
        int acceleration;
        int nerves;
        }


int main()
{
    printIntro();
    printCountDown();
    printFirstPlaceAfterLap();
    return 0;
}
