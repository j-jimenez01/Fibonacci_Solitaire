#ifndef Deck_h
#define Deck_h
#include <iostream>
#include "Card.h"

class Deck{
  private:
    Card cards [52];
    int top = 0;
    char values[13] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
  public:
    Deck();//constructor that creates deck
    void refreshDeck();//reset the deck so it looks new
    Card deal();//deal a card from the top deck
    void shuffle();//shuffle the cards
    bool isEmpty();//true if deck empty, else false
    void display();//showing all the cards: 13 columns and 4 rows
};

#endif