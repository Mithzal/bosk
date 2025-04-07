//
// Created by marti on 29/10/2024.
//

#ifndef PROJET_BOSK_GAMES_H
#define PROJET_BOSK_GAMES_H

#include <vector>
#include <string>
#include "Player.h"

class Player;

using namespace std;

class Games {
private:
    int id;
    vector<vector<string>> table;
    static int compteur;
    int nbPlayer;
    vector<Player> players;

public:

    Games(int players);//pas obligé
    ~Games();
    void display();

    void placerTree(int tree, pair<int, int> pos,Player p );
    void placeLeave(pair<int, int> pos);
    void calculPoint();

    //vérification de la pose (si elle est valide)


};


#endif //PROJET_BOSK_GAMES_H
