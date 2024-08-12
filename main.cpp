#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

int main() {
srand (time(NULL));
int u;
char s, r;
std::string us;
std::string ch;
std::string st;
std::string ac;

do {
label:
int c = rand() % 5 + 1;

  std::cout << "1) rock\n\
2) paper\n\
3) scissors\n\
4) lizard\n\
5) spock\n\
0) Help\n";
  std::cin >> u;

  switch (c) {
    case 1:
        ch = "Rock";
        break;
    case 2:
        ch = "Scissors";
        break;
    case 3:
        ch = "Paper";
            break;
    case 4:
        ch = "Lizard";
            break;
    case 5:
        ch = "Spock";
        break;
    }

    switch (u) {
        case 1:
            us = "Rock";
            break;
        case 2:
            us = "Scissors";
            break;
        case 3:
            us = "Paper";
            break;
        case 4:
            us = "Lizard";
            break;
        case 5:
            us = "Spock";
            break;
    }


    if (u == 0){
            std::cout << "The game is an expansion on the game Rock, Paper, Scissors, with the additional hand signs of Lizard (resembling a hand puppet),\n\
and Spock (the Vulcan Salute). Each player picks a variable and reveals it at the same time. The winner is the one who defeats the others. \n\
In a tie, the process is repeated until a winner is found.\n\
\n\
Almost always, the boys will all pick Spock at the same time and tie over and over again.\n\
\n\
        Scissors cuts Paper\n\
        Paper covers Rock\n\
        Rock crushes Lizard\n\
        Lizard poisons Spock\n\
        Spock smashes Scissors\n\
        Scissors decapitates Lizard\n\
        Lizard eats Paper\n\
        Paper disproves Spock\n\
        Spock vaporizes Rock\n\
        (and as it always has) Rock crushes Scissors\n\
\n\n";
        std::cin.ignore();

            goto label;
    }
  std::cout << "\nYou chose " << us << "\nComputer chose " << ch << std::endl << std::endl;

if (u == 1 && c == 3) {
        ac = "covers";
    s = 'l';
}
    else if (u == 1 && c == 5) {
    ac = "vaporises";
    s = 'l';
    }
    else if (u == 1 && c == 2) {
    ac = "crushes";
    s = 'w';
    }
    else if (u == 1 && c == 4) {
    ac = "crushes";
    s = 'l';
    }
    else if (u == 2 && c == 5) {
    ac = "smashes";
    s = 'l';
    }
    else if (u == 2 && c == 1) {
    ac = "crushes";
    s = 'l';
    }
    else if (u == 2 && c == 3) {
    ac = "cuts";
    s = 'w';
    }
    else if (u == 2 && c == 4) {
        ac = "decapitates";
        s = 'w';
    }
    else if (u == 3 && c == 4) {
        ac = "eats";
        s = 'l';
    }
    else if (u == 3 && c == 2) {
        ac = "cuts";
        s = 'l';
    }
    else if (u == 3 && c == 5) {
        ac = "disproves";
        s = 'w';
    }
    else if (u == 3 && c == 1) {
        ac = "covers";
        s = 'w';
    }
    else if (u == 4 && c == 1) {
        ac = "crushes";
        s = 'l';
    }
    else if (u == 4 && c == 2) {
        ac = "decapitates";
        s = 'l';
    }
    else if (u == 4 && c == 3) {
        ac = "eats";
        s = 'w';
    }
    else if (u == 4 && c == 5) {
        ac = "poisons";
        s = 'w';
    }
    else if (u == 5 && c == 4) {
        ac = "poisons";
        s = 'l';
    }
    else if (u == 5 && c == 3) {
        ac = "disproves";
        s = 'l';
    }
    else if (u == 5 && c == 1) {
        ac = "vaporises";
        s = 'w';
    }
    else if (u == 5 && c == 2) {
        ac = "smashes";
        s = 'w';
    }
    else if (u == c){
        s = 't';
    }

if (s == 'w'){
        st = "You win.";
    }
    else if (s == 'l') {
        st = "You lose.";
    }

if (s == 'w') {
    std::cout << us << " " << ac << " " << ch << ". " << st << std::endl;
}
    else if (s == 'l') {
    std::cout << ch << " " << ac << " " << us << ". " << st << std::endl;
    }
    else if (s == 't'){
    std::cout << "It's a tie, try again.\n\n";
            goto label;
    }

    std::cout << "\nAgain? (y/n)";
    std::cin >> r;
    std::cout << std::endl;

}while (r == 'y' ||r == 'Y');

return 0;
}
