#include <iostream>
#include "Games.h"






int main() {

    Games* g1 = new Games(3);
    //g1->display();
    Player p2(1);
    g1->placerTree(2, pair(5,5),p2);
    g1->display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
