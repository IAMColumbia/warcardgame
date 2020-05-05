#ifndef CARD_HPP
#define CARD_HPP

#include <string>
struct Card
{
  Card(std::string suite, std::string rank);
  std::string suite;
  std::string rank;
};
#endif
