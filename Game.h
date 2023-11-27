#ifndef MAIN_CPP_GAME_H
#define MAIN_CPP_GAME_H
#include <vector>
#include "Monster.h"

class Game {
private:
    vector<Monster> characterPool{Yuka(),Jagraz(),Cejan(),Mourique(),Kiuriu(),Zoet(),Doozli(),Adwanny(),
                                  Amo(),Gueta(),Haer(),Larry(),Ragis(),Reil(),Teeprav()};
    vector<Monster> *playersTeam=new vector<Monster>;
    vector<Monster> *opponentsTeam=new vector<Monster>;
    Monster x;
    int rounds=4;
    int opponents;
    int opponentsMonsters;
    double hpBoostRatio;

public:
    Game(){
        try {
            startGame();
        } catch(...) {
            cout << endl;
            cout << "WYSTAPIL BLAD!!! , WPROWADZILES BLEDNE DANE" << endl;
        }
    }
    void startGame();

    //Funckja ktora jest odpowiedzialna za cala rozgrywke

    void pickPlayersTeam();

    //Dzieki tej funkcji gracz moze wybrac swoja druzyne potworow

    void pickOpponentsTeam();

    //Losowo wybiera druzyne przeciwnika

    void fight();

    //Funckja odpowiedzialna za przebieg walki pomiedzy graczem a przeciwnikiem

    void printYourTeam();

    //Wypisuje na konsoli druzyne gracza

    void printOpponentsTeam();

    //Wypisuje na konsoli druzyne przeciwnika

    void setSpecialPowerUsedToZero();

    //Funkcja ktora ustawia ilosc uzytych specjalnych atakow na 0 (po skonczonej walce)

    void hpBoost();

    //Funckja ktora podwyzsza hp wszystkim potworom ( ktore spelniaja warunek w funckji hpBoost w Monster) w druzynie gracza

    void chooseLevel();

    //Funkcja odpowiedzialna za wybor poziomu trudnosci przez gracza

    void showAllMonsters();

    //Funckja pokazujace dostepne potwory na poczatku gry

    int findIndex(vector<Monster> monster, string decyzja);

    //Funckja szuka indeksu postaci ktorej nazwa jest przekazana w parametrze
    //@param monster - wektor w ktorym funkcja szuka imiona postaci
    //@param decyzja - imie szukanej postaci
    //return zwracany jest indeks postaci

    void showInteractions();

    //Funckja pokazuje oddzialywania miedzy typami potworow

};


#endif //MAIN_CPP_GAME_H

