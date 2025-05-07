#include "Player.hpp"
#include <iostream>
    Player::Player(std::string name){
        _coins = 0;
        _name = name;
        _is_sanction = false;
        _last_arrested = nullptr;
    }
    Player::Player(Player& other){
        _coins = other._coins;
        _name = other._name;
        _is_sanction = other._is_sanction;
        _last_arrested = other._last_arrested;
    }
    Player::~Player(){
        delete _last_arrested;
    }

    Player& Player::operator=(Player& other){
        _coins = other._coins;
        _name = other._name;
        _is_sanction = other._is_sanction;
        _last_arrested = other._last_arrested;
    }

    void Player::gather(){
        if(!sanction)
            _coins++;
        
    }
    void Player::tax(){
        if(!sanction)
            _coins+= 2;
    }

    void Player::bribe(){
        if(_coins > 3)
            _coins-=4;

    }
    void Player::arrest(Player& other){
        _coins++;
        other._coins--;   
       other._last_arrested = this;
    }
    void Player::sanction(Player& other){
        if(_coins > 2)
            other._is_sanction = true;
            _coins -=3;
    }
    void Player::coup(Player& other){
        if(_coins > 6)
            other.~Player();//////
    }
