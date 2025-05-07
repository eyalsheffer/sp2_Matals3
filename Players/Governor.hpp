#ifndef Governor_HPP
#define Governor_HPP

#include <iostream>
#include "Player.hpp"

class Governor : public Player{
    private:

    public:
    // Governor(std::string name);
    // Governor(Player& other);
    // ~Governor();

    // Player& operator=(Player& other);

    //void gather();
    void tax() override;
    //void bribe();
    //void arrest(Player& other);
    //void sanction(Player& other);
    //void coup(Player& other);

};
#endif