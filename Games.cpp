//
// Created by marti on 29/10/2024.
//

#include "Games.h"
#include <string>
#include <iostream>

using namespace std;

int Games::compteur = 0;

Games::Games(int players) {
    int size;
    this->id = compteur++;
    this->nbPlayer = players;
    switch (players){
        case 2:  size = 8+9;break;//nbCase+nbLignes
        case 3: size = 10+11;break;
        case 4 : size = 12+13;break;
    }
    for (int i = 0; i < size; ++i) {//pour chaque ligne, créer un vector de int c'est lui qui va prendre les valeurs, puis le pusback
        vector<string> row;
        for (int j = 0; j < size; ++j) {
            if (j % 2 == 0) { row.emplace_back(" |"); }
            if (i % 2 == 1) { row.emplace_back(" 0"); }
            if (j % 2 == 0) { row.emplace_back(" |"); }
        }
        this->table.push_back(row);
    }
}

void Games::display() {
    for (auto & i : this->table) {
        for (int j = 0; j < this->table.size(); ++j) {
            cout << i[j];
        }
        cout << endl;
    }
}

void Games::calculPoint() {
    for (int i = 0; i < this->table.size(); i+=2) {
        int compt;
        for (int j = 0; j < this->table.size(); ++j) {
            //regarder les arbres et calculer les points

        }
    }

}


void Games::placerTree(int tree, pair<int, int> pos, Player p) {
    this->table[pos.first][pos.second] = " 1";// faire concaténation de la bibliothèque string
    p.modTrees(tree);
}


// 3 : 10*10
// 4 : 12*12
// 2 : 8*8