#include <iostream>
#include "ufo_functions.hpp"

int main() {
  std::string codeword = "codecademy";
  std::string answer = "__________";

  int misses = 0;
  greet();

  std::vector<char> incorrect;
  bool guess = false;

  char letter;
  

  while (answer != codeword && misses < 7) {
    display_misses(misses);
    
    display_status(incorrect, answer);
    std::cout << "Please enter your guess: \n";
    std::cin >> letter;
    for (int i = 0; i < codeword.size(); i++){
      if (letter == codeword[i]) {
        answer[i] = letter;
        guess = true;
      }
    }
    if (guess == true) {
      std::cout << "Correct!\n";
    } else {
      std::cout << "Incorrect! The tractor beam pulls the person in further.";
      incorrect.push_back(letter); 
      misses++;
    }
    guess = false;
  }

end_game(answer, codeword);

}
