#include <iostream>

using namespace std;

// no global varuables
// no strings
// include <iostream> not stdio

int main()
{
  int guess = 0;
  int count = 0;
  char play = 'y';
 
  //generating random number
  srand(time(NULL));
  int range = 100-0+1;
  int random = rand() %range +0;

  do{
    
  //input a number as a guess
  cout << "guess a number 0-100 inclusive: ";
  cin >> guess;
  count++;

 //if gues is larger than the random number
  if (guess > random){
    cout << "Your guess is too large" << endl;
  }

  //if guess is smaller than the random number
  if (guess < random){
    cout << "Your guess is too small" << endl;
  }

  
  //if guess is correct
  if (guess == random){
    cout << "your guess is correct!!" << endl;
    cout << "the random number is: " << random << endl;
    cout << "the number of guesses you took is " << count << endl;
    
    //generating new random number
    random = rand() %range +0;
    //generating new count
    count = 0;
    
    cout << "Would you like to play again? 'Y' or 'N'" << endl;
    cin >> play;  }
  
  } while ((play == 'Y') || (play == 'y'));
  //check if play is yes, if no, the game would end
}
