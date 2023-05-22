// Jose Jimenez
// Class CECS 282-04
// Project Name Prog 1 – Solitaire Prime
// Due Date 02-15-22
// 
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.

#include <iostream>
#include "Deck.h"
#include "Card.h"
using namespace std;

int isFibo(int counter){
  counter++;
  Deck playDeck = Deck();
  int rowval = 0;
  int fibonums[13]={1,2,3,5,8,13,21,34,55,89,144,233,377};
  int end =0;
  int sum;
  int counter2 = 0;
  playDeck.shuffle();
  while(playDeck.isEmpty()!=true){
    Card c = playDeck.deal();
    rowval += c.getValue();
    c.display();
    cout<<",";
    for(int i = 0; i < 13;i++){
      if(rowval == fibonums[i]){
        cout << "Fibo: "<<rowval <<endl;
        counter2+=1;
        rowval = 0;
        end = 1;
        break;
      }
      else{
        end = 0;
        sum = rowval;
      }
    }
  }//end of while loop
  if(end == 1){
      cout<<"\nWinner in "<< counter2<<" piles!\n"<<endl;
    cout<<"You played "<<counter<<" games!\n";
    }
    else{
      cout<<"\nLast hand value:"<<sum<<"\n"<<"Loser in "<<counter2<<" piles!\n";
    }
  return counter;
}//end of isFibo

int main(){
    //keeps running till the user choses to exit
    int counter = 0; //to count the amount of tries
    Deck newDeck = Deck();
    bool running = false;
    while(running != true){
        //displaying the menu
        cout<<endl;
        cout << "Welcome to Fibonacci Solitarie!"<< endl <<
        "1) New Deck" << endl << "2) Display Deck" << endl << "3) Shuffle Deck" << endl << "4) Play Solitaire" << endl << "5) Exit" << endl;

        //getting the users choice
        int choice = 0;
        cout << "What would you like to do?" << endl;
        cin >> choice;
        //if the user enters an invalid choice then it will keep asking
        while(choice < 1 || choice >> 5){
            cout << "What would you like to do?" << endl;
            cin >> choice;
        }//end of the second while loop
        cout<<endl;
        //doing what the user chosed
        if(choice == 1){
            newDeck.refreshDeck();
        }
        else if(choice == 2){
            newDeck.display();
        }
        else if(choice == 3){
            newDeck.shuffle();
        }
        else if(choice == 4){
          cout << "Playing Fibonacci Solitaire !!!\n"<< endl;
          counter = isFibo(counter); 
        }
        else{
          running = true;
          break;
        }
    }//end of the while loop
    cout<<"...Game Over... ";


}//end of the main
