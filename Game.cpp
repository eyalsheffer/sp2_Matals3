#include "Game.hpp"
Game::Game(){
    _turn = 0;
}
Game::~Game(){
    // for(Player* p : _players){
    //      p = nullptr;
    // }
}
Game& Game::instance(){
    static Game instance;
    return instance;
}
void Game::add_player(Player* p){
    _players.push_back(p);
}