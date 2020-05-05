#include "game_service.hpp"

GameService::GameService()
{
  std::vector<Card *> *cards = new std::vector<Card *>();

  //TODO
  //fill out all cards

  std::vector<Card *> * playerOneCards = new std::vector<Card *>();

  for(int i = 0; i < PLAYER_CARDS; i++){
    Card * card = cards->at(i);
    playerOneCards->push_back(card);
  }

  for(int i = 27; i < MAX_CARDS; i++){
      
  }


}    

