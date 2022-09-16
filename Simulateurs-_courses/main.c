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

    void printIntro(){
        printf("Bienvenue a notre evenement principal, les fans de course numerique !\n");
        printf("J'espere que tout le monde a pris son gouter car nous allons commencer !\n");
        printf("\n");
    }

    void printCountDown(){
        printf("Coureurs prets ! Dans... \n");
        for(int i=5;i>=1;i--){
            printf("%d \n",i);
            //step
            sleep(1);
        }
        printf("Course ! \n");
    }

    void printFirstPlaceAfterLap(struct Race race){

            printf("Apres le tour numero %d \n ",race.currentLap);
            printf("La premiere place est occupee par : %s dans la voiture de course %s \n \n",race.firstPlaceDriverName,race.firstPlaceRaceCarClor);
    }

    void printCongratulation(struct Race race){
            printf("Felicitations tous %s, dans la voiture de course %s, pour son incroyable performance.\n",race.firstPlaceDriverName,race.firstPlaceRaceCarClor);
            printf("C etait vraiment une belle course et bonne nuit a tous ! \n");
    }

        int calculateTime(){
            int vitesse = 1 + rand() % 3;
            int acceleration = 1 + rand() % 3;
            int nerves = 1 + rand() % 3;
            //la somme Time racecar
            return vitesse + acceleration + nerves;
        }

        void updateRaceCar(struct RaceCar *racecar){
                //addition et stocke la somme dans totallaptime
            (*racecar).totalLapTime = (*racecar).totalLapTime + calculateTime();
        }

        void updateFirstPlace(struct Race *race,struct RaceCar *racecar1,struct RaceCar *racecar2){
            //condition timeToltal
            if((*racecar1).totalLapTime <= (*racecar2).totalLapTime){
                    //stockage name drive et color racecar
                strcpy((*race).firstPlaceDriverName,(*racecar1).driveName);
                strcpy((*race).firstPlaceRaceCarClor,(*racecar1).raceCarColor);
            }
            else{
                strcpy((*race).firstPlaceDriverName ,(*racecar2).driveName) ;
                strcpy((*race).firstPlaceRaceCarClor,(*racecar2).raceCarColor);
            }
        }

        void startRace(struct RaceCar *racecar1 ,struct RaceCar *racecar2){
                    //initialiser race
            struct Race race={5,1,"",""};
              srand(time(0));
              for(int i=0;i<race.numbreOflaps;i++){

                    //modofier totaltime
                updateRaceCar(racecar1);
                updateRaceCar(racecar2);
                    //afficher name drive et color racecar
                updateFirstPlace(&race,racecar1,racecar2);
                sleep(1);
                    //la premier sur la tour
                printFirstPlaceAfterLap(race);
                race.currentLap++;
                sleep(1);
              }
              //Felicitations
            printCongratulation(race);
        }


int main()
{
  srand(time(0));
    printIntro();
    printCountDown();
        //initialiser raeccar
        struct RaceCar racecar1={"ALI","RED",0};
        struct RaceCar racecar2={"Med","BLACK",0};
    startRace(&racecar1,&racecar2);








    return 0;
}
