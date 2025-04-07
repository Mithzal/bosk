//
// Created by marti on 29/10/2024.
//

#ifndef PROJET_BOSK_PLAYER_H
#define PROJET_BOSK_PLAYER_H

#include <vector>
#include <utility>
#include <string>
#include <array>
#include "Games.h"

using namespace std;


class Player {
private:
    int points;
    int nbLeaves;
    vector<int> BLeaves;
    int colors;
    int nbSquirrels;
    vector<int> trees;//liste des arbres dipsonible

public:
    Player();//constructeur par défault : set les arbres, le nombres de feuille et d'écureil ainsi que points
    //~Player();//pas utile ?
    Player ( int c);//constructeur par argument
    int getPoints;
    int getNbLeaves;
    int getColor;
    int getNdSquirrels;
    void addPoint(int pts);
    void modTrees(int tree);



};


#endif //PROJET_BOSK_PLAYER_H
