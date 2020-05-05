#ifndef GAME_SERVICE_HPP
#define GAME_SERVICE_HPP

#include "player.hpp"
#include "card.hpp"
#include "player_service.hpp"

#define MAX_CARDS 52
#define PLAYER_CARDS 26

class GameService
{
private:
  PlayerService * m_playerOne;
  PlayerService * m_playerTwo;
  std::vector<Card *> * m_cards;
public:

  GameService();

  ~GameService();

  void Play();
};    

#endif
