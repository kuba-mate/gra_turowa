#ifndef PROJEKT_MONSTER_H
#define PROJEKT_MONSTER_H
#include <iostream>
#include <vector>
using namespace std;

class Monster {
protected:
    string name;
    int strenght;
    int dexterity;
    int hp;
    string specialPowerName;
    int specialPower;
    int timesSpecialPowerCanBeUsed;
    int specialPowerWasUsed=0;
    int exp;
    int pointsToLevelUp;
    int expAfterDeath;
    int level;
    double influenceRatio;
    string type;
public:
    void attack(Monster& monster);

    // Funckja ustala sile z jaka zostanie uderzony potwor podany w parametrze i odejmuje ta sile od jego punktow zycia
    //@param monster - potwor ktory ma zostac uderzony

    void tryToAttack(Monster& monster);

    // Funckja ktora sprawdza czy mozemy uderzyc drugiego potwora (moze zrobic unik, dzieki swojej zrecznosci)
    //@param monster - potwor ktory ma zostac uderzony

    void specialAttack(Monster& monster);
    void tryToSpecialAttack(Monster& monster);
    bool tryToUseSpecialPower();

    //Funckja sprawdza czy gracz moze uzyc specjalnego ataku czy zostal on juz wykorzystany
    //@return jesli nie wykorzystalismy wszystkich atakow specjalnych zwraca true ,wpp false

    string getName();
    int getHp();
    void setHp(const int x);
    void setSpecialPowerWasUsed(const int x);
    bool isTeamAlive(vector<Monster> monster);

    //Sprawdza czy wektor potworow podany jako parametr jeszcze zyje
    //@param monster - sprawdzany wektor
    //@return jesli ktorykolwiek z potworow w wektorze zyje to zwraca true, wpp false

    vector<Monster> deleteMonster(vector<Monster> Vector, const int x);

    //Usuwa potwora z wektora pod indeksem podanym jako parametr
    //@param Vector - wektor z ktorego usuwamy potwora
    //@param x - indeks z ktorego usuwamy
    //@return - zwraca zmodyfikowany wektor (bez usunietego potwora)

    void levelUp();
    void chooseLevelUp();

    //Daje zapytanie do gracza ktory atrybut chce ewoluowac w potworze

    bool levelUpIsAvailable();
    void increaseExpValue(Monster& monster);

    //Sprawdza ile potwor podany jako parametr oddaje exp po smierci a nastepnie dodaje to wartosc
    // do obecnej ilosci exp dla potwora na ktorym zostala wykonana
    //@param monster - potwor z ktorego pobiera wartosc exp po smierci

    void hpBoost(const double x);

    //Funckja zwieksza wartosc hp potwora, jesli jest ono ponizej 50
    //@param x - wspolczynnik ktory definiuje ile hp powinno zostac dodane do potwora

    void setInfluenceRatio(const Monster& monster);

    //funckja ustawia jak poszczegolne potwory na siebie oddzialuja
    //@param monster - potwor na ktorego bedzie chcial oddzialywac potwor na ktorym wywolujemy funckje

    friend ostream& operator<<(ostream& o, const Monster &monster);
    friend ostream& operator>>(ostream& o, const Monster &monster);

};

class Yuka : public Monster {
public:
    Yuka(){
        this->name="Yuka";
        this->strenght=31;
        this->dexterity=33;
        this->hp=160;
        this->specialPowerName="trzesienie ziemii";
        this->specialPower=75;
        this->timesSpecialPowerCanBeUsed=2;
        this->exp=0;
        this->pointsToLevelUp=200;
        this->expAfterDeath=250;
        this->level=1;
        this->type="land";
    }
};

class Jagraz : public Monster{
public:
    Jagraz(){
        this->name="Jagraz";
        this->strenght=66;
        this->dexterity=18;
        this->hp=160;
        this->specialPowerName="ognisko";
        this->specialPower=96;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=250;
        this->expAfterDeath=400;
        this->level=1;
        this->type="fire";
    }
};

class Cejan : public Monster{
public:
    Cejan(){
        this->name="Cejan";
        this->strenght=56;
        this->dexterity=28;
        this->hp=170;
        this->specialPowerName="uderzenie lopata";
        this->specialPower=89;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=150;
        this->expAfterDeath=250;
        this->level=1;
        this->type="steel";
    }
};

class Mourique : public Monster{
public:
    Mourique(){
        this->name="Monrique";
        this->strenght=42;
        this->dexterity=27;
        this->hp=190;
        this->specialPowerName="kulka lodowa";
        this->specialPower=65;
        this->timesSpecialPowerCanBeUsed=3;
        this->exp=0;
        this->pointsToLevelUp=300;
        this->expAfterDeath=200;
        this->level=1;
        this->type="ice";
    }
};

class Amo : public Monster{
public:
    Amo(){
        this->name="Amo";
        this->strenght=62;
        this->dexterity=30;
        this->hp=140;
        this->specialPowerName="huragan";
        this->specialPower=98;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=200;
        this->expAfterDeath=300;
        this->level=1;
        this->type="air";
    }
};

class Reil : public Monster{
public:
    Reil(){
        this->name="Reil";
        this->strenght=68;
        this->dexterity=25;
        this->hp=150;
        this->specialPowerName="wir wodny";
        this->specialPower=90;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=250;
        this->expAfterDeath=150;
        this->level=1;
        this->type="water";
    }
};

class Gueta : public Monster{
public:
    Gueta(){
        this->name="Gueta";
        this->strenght=34;
        this->dexterity=28;
        this->hp=190;
        this->specialPowerName="uderzenie z miotacza ognia";
        this->specialPower=75;
        this->timesSpecialPowerCanBeUsed=2;
        this->exp=0;
        this->pointsToLevelUp=350;
        this->expAfterDeath=300;
        this->level=1;
        this->type="fire";
    }
};

class Adwanny : public Monster{
public:
    Adwanny(){
        this->name="Adwanny";
        this->strenght=41;
        this->dexterity=17;
        this->hp=185;
        this->specialPowerName="zarzacy pret";
        this->specialPower=80;
        this->timesSpecialPowerCanBeUsed=2;
        this->exp=0;
        this->pointsToLevelUp=200;
        this->expAfterDeath=300;
        this->level=1;
        this->type="steel";
    }
};

class Ragis : public Monster{
public:
    Ragis(){
        this->name="Ragis";
        this->strenght=57;
        this->dexterity=24;
        this->hp=160;
        this->specialPowerName="ruchome piaski";
        this->specialPower=95;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=150;
        this->expAfterDeath=200;
        this->level=1;
        this->type="land";
    }
};

class Kiuriu : public Monster{
public:
    Kiuriu(){
        this->name="Kiuriu";
        this->strenght=60;
        this->dexterity=32;
        this->hp=110;
        this->specialPowerName="gora lodowa";
        this->specialPower=96;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=100;
        this->expAfterDeath=300;
        this->level=1;
        this->type="ice";
    }
};

class Larry : public Monster{
public:
    Larry(){
        this->name="Larry";
        this->strenght=64;
        this->dexterity=21;
        this->hp=160;
        this->specialPowerName="tsunami";
        this->specialPower=88;
        this->timesSpecialPowerCanBeUsed=2;
        this->exp=0;
        this->pointsToLevelUp=200;
        this->expAfterDeath=150;
        this->level=1;
        this->type="water";
    }
};

class Zoet : public Monster{
public:
    Zoet(){
        this->name="Zoet";
        this->strenght=55;
        this->dexterity=27;
        this->hp=185;
        this->specialPowerName="uderzenie mlotkiem";
        this->specialPower=80;
        this->timesSpecialPowerCanBeUsed=2;
        this->exp=0;
        this->pointsToLevelUp=300;
        this->expAfterDeath=400;
        this->level=1;
        this->type="steel";
    }
};

class Teeprav : public Monster{
public:
    Teeprav(){
        this->name="Teeprav";
        this->strenght=46;
        this->dexterity=22;
        this->hp=190;
        this->specialPowerName="zalanie lawa";
        this->specialPower=70;
        this->timesSpecialPowerCanBeUsed=3;
        this->exp=0;
        this->pointsToLevelUp=200;
        this->expAfterDeath=350;
        this->level=1;
        this->type="fire";
    }
};

class Haer : public Monster{
public:
    Haer(){
        this->name="Haer";
        this->strenght=50;
        this->dexterity=19;
        this->hp=175;
        this->specialPowerName="tornado";
        this->specialPower=85;
        this->timesSpecialPowerCanBeUsed=2;
        this->exp=0;
        this->pointsToLevelUp=350;
        this->expAfterDeath=150;
        this->level=1;
        this->type="air";
    }
};

class Doozli : public Monster{
public:
    Doozli(){
        this->name="Doozli";
        this->strenght=68;
        this->dexterity=21;
        this->hp=145;
        this->specialPowerName="sopel lodu";
        this->specialPower=95;
        this->timesSpecialPowerCanBeUsed=1;
        this->exp=0;
        this->pointsToLevelUp=300;
        this->expAfterDeath=150;
        this->level=1;
        this->type="ice";
    }
};

#endif //PROJEKT_MONSTER_H

