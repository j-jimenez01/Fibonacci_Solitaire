#ifndef Card_h
#define Card_h
#include <iostream>
using namespace std;

class Card{
  private:
  char rank;
  char suit;
  public:
    Card();// default card
    Card(char r, char s);//constructor to create a card, setting the rank and suit
    void setCard(char r, char s);//set existing card to new values 
    int getValue();//return value of the card. Ace=1 thru 10,Jack=10,Q=10,K=10
    void display();//display the card using 2 fields 

};

#endif