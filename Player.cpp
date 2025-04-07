//
// Created by marti on 29/10/2024.
//

#include "Player.h"
#include <algorithm>

using namespace std;

Player::Player(int c) {
    points = 0;
    nbLeaves = 8;
    colors = c;
    nbSquirrels = 1;
    for (int i = 2; i < 8; ++i) {
        this->BLeaves.push_back(i);
    }
    for (int i = 1; i < 4; ++i) {
        this->BLeaves.push_back(i);
        this->BLeaves.push_back(i);
    }
}

void Player::modTrees(int tree) {
    for (int i = 0; i <this->BLeaves.size(); ++i) {
        if (this->BLeaves[i] == tree){remove(this->BLeaves.begin(),this->BLeaves.end(), tree);}
    }


}