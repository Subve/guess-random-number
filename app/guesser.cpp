#include "guesser.hpp"
int main(){

    std::cout<<"Welcome to guess number!\n";
    
    /* initialize random seed: */
  srand (time(NULL));
  int iSecret;
  int yourGuess;
    /* generate secret number between 1 and 1000: */
  iSecret = rand() % 1000 + 1;
    do{
        std::cout<<"Put your guess numer\n";
        std::cin>>yourGuess;
        if (iSecret<yourGuess) 
        {std::cout<<"The number is higher";}
        else {std::cout<<"The number is lower";}
        
    }while(yourGuess!=iSecret);
    std::cout<<"You're great! You have won!";
    
}