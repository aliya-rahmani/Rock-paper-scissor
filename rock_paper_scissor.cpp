#include <iostream>
#include <stdlib.h>
#include <time.h>
// kjkljkl
int main ()

{
srand(time(NULL));
int computerChoice = rand() % 3 + 1;
int userChoice=0;
int score=0;
int score2=0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1 :rock\n";
std::cout << "2 :paper\n";
std::cout << "3 :scissor\n";

std::cout << "shoot! \n";

std::cin >> userChoice;

std::cout <<  computerChoice << "\n";

if(computerChoice == 1 && userChoice == 1) {
    std::cout << "It was a tie!" << std::endl;
} else if (computerChoice == 1 && userChoice == 3) {
    std::cout << "The computer won! Better luck next time!" << std::endl;
} else if (computerChoice == 2 && userChoice == 2) {
    std::cout << "It was a tie!" << std::endl;
} else if (computerChoice == 2 && userChoice == 1) {
    std::cout << "The computer won! Better luck next time!" << std::endl;
} else if (computerChoice == 3 && userChoice == 3) {
    std::cout << "It was a tie!" << std::endl;
} else if (computerChoice == 3 && userChoice == 2) {
    std::cout << "The computer won! Better luck next time!" << std::endl;
} else {
    std::cout << "Congrats! You won!" << std::endl;
}

return 0;
}
