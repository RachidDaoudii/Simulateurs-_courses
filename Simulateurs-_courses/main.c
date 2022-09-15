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
        char raceCarColor[20];
        int totalLapTime;
    };
    int random(){
        int i, n;
        time_t t;
        n = 1;
        /* Intializes random number generator */
       srand((unsigned) time(&t));
       /* Print 1 random numbers from 1 to 3 */
       for( i = 0 ; i <n ; i++ ) {
          return  1 + rand() % 3;
       }
    }

    void printIntro(){
        printf("Bienvenue a notre evenement principal, les fans de course numerique !\n");
        printf("J'espere que tout le monde a pris son gouter car nous allons commencer !\n");
        printf("\n");
        printf("%d",random());
    }

    void printCountDown(){
        printf("Coureurs prets ! Dans... \n");
        for(int i=5;i>=1;i--){
            printf("%d \n",i);
            sleep(1);
        }
        printf("Course ! \n");
    }

    void printFirstPlaceAfterLap(struct Race race){
        for(int i=0;i<5;i++){
            printf("Apres le tour numero %d \n ",race.currentLap+i);
            printf("La premiere place est occupee par : %s dans la voiture de course %s \n \n",race.firstPlaceDriverName,race.firstPlaceRaceCarClor);
            break;
        }
    }

    void printCongratulation(struct Race race){
            printf("Felicitons tous %s, dans la voiture de course %s, pour son incroyable performance.\n",race.firstPlaceDriverName,race.firstPlaceRaceCarClor);
            printf("C etait vraiment une belle course et bonne nuit a tous ! \n");
    }

        int calculateTimeToCompleteLap(){
            int vitesse = random();
            int acceleration = random();
            int nerves = random();
            return vitesse + acceleration + nerves;
        }

        void updateRaceCar(struct RaceCar *racecar){
            (*racecar).totalLapTime = (*racecar).totalLapTime + calculateTimeToCompleteLap();
        }

        void updateFirstPlace(struct Race *race,struct RaceCar *racecar1,struct RaceCar *racecar2){
            //condition time
            if((*racecar1).totalLapTime <= (*racecar2).totalLapTime){
                strcpy((*race).firstPlaceDriverName,(*racecar1).driveName);
                strcpy((*race).firstPlaceRaceCarClor,(*racecar1).raceCarColor);
            }
            else{
                strcpy((*race).firstPlaceDriverName ,(*racecar2).driveName) ;
                strcpy((*race).firstPlaceRaceCarClor,(*racecar2).raceCarColor);
            }
        }

        void startRace(struct RaceCar *racecar1 ,struct RaceCar *racecar2){
            struct Race race={5,1,"",""};
              for(int i=0;i<race.numbreOflaps;i++){
                    //incrémentation time
                updateRaceCar(racecar1);
                updateRaceCar(racecar2);
                    //afficher
                updateFirstPlace(&race,racecar1,racecar2);
                sleep(1);
                printFirstPlaceAfterLap(race);
                sleep(1);
              }
            printCongratulation(race);
        }


int main()
{

    printf("%",random());
    printIntro();
    printCountDown();

    struct RaceCar racecar1={"ALI","RED",0};
    struct RaceCar racecar2={"Med","BLACK",0};

    startRace(&racecar1,&racecar2);




    return 0;
}
