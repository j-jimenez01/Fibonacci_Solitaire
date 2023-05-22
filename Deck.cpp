#include <iostream>
#include "Deck.h"
#include "Card.h"
#include <stdlib.h>
using namespace std;

Deck::Deck(){
    int end;
    for(int i = 0; i < 52; i++){
      if(i < 13){
        cards[i] = Card(values[i],'S');
      }
      else if(i < 26){
        end = 13;
        cards[i] = Card(values[i-end],'H');
      }
      else if(i < 39){
        end = 26;
        cards[i] = Card(values[i-end],'D');
      }
      else{
        end = 39;
        cards[i] = Card(values[i-end],'C');
      }
    }
}

void Deck::refreshDeck(){
    int end;
    for(int i = 0; i < 52; i++){
      if(i < 13){
        cards[i] = Card(values[i],'S');
      }
      else if(i < 26){
        end = 13;
        cards[i] = Card(values[i-end],'H');
      }
      else if(i < 39){
        end = 26;
        cards[i] = Card(values[i-end],'D');
      }
      else{
        end = 39;
        cards[i] = Card(values[i-end],'C');
      }
    }
}

Card Deck::deal(){
    top+=1;
    return cards[top - 1];
}

void Deck::shuffle(){
  for(int i = 0; i < 123; i++){
    int deckRange = 52; //represents the size of our deck
    int deckNum1 = rand() % deckRange;
    int deckNum2 = rand() % deckRange;
    Card cardSpot = cards[deckNum1];
    cards[deckNum1] = cards[deckNum2];
    cards[deckNum2] = cardSpot;
  }
}

bool Deck::isEmpty(){
    if(top == 52){
      return true;
    }
    else{
      return false;
    }
}

void Deck::display(){
    for(int i = 0; i < 52; i++){
      cards[i].display();
      if(i == 12 || i == 25 || i ==38){
        cout << endl;
      }
      
    }
}