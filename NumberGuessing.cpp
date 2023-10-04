#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;

class Gamemode{
    public:
            Gamemode(){
                int run = 1;
                char answer;
                cout << "WELCOME TO NUMBER GUESSING GAME BY ANIRUDH" << endl;
                cout << "Enter y if you want to continue or n if you want to leave:";
                cin >> answer;
                cout << endl << endl;

                while(run){
                    if(tolower(answer) == 'y'){
                        selectDifficulty();
                        if (difficulty == 'e'){
                            difficultyEasy();
                        }
                        else if(difficulty == 'm'){
                            difficultyMedium();
                        }
                        else if(difficulty == 'h'){
                            difficultyHard();
                        }
                        else{
                            cout << "PLEASE ENTER THE DESIGNATED LETTERS FOR THE DIFFICULTIES." << endl << endl;
                        }
                        cout << "Enter y if you want to continue or n if you want to leave:";
                        cin >> answer;
                        cout << endl << endl;
                    }
                    else{
                        run = 0;
                    }
                    
                }
                
            }
            char difficulty;
            void selectDifficulty();
            void difficultyEasy();
            void difficultyMedium();
            void difficultyHard();
};


void Gamemode::selectDifficulty(){
    cout << "Please choose the difficulty for the game:" << endl;
    cout << "Enter e for easy, m for medium, h for hard:";
    cin >> difficulty;
    cout << endl;
}

void Gamemode::difficultyEasy(){
    int easyChoice,userChoice,chances = 3,effort=1;
    srand(time(0));
    easyChoice = 1 + (rand() % 10);
    cout << "YOU HAVE SELECTED EASY MODE!!!!" << endl;
    cout << "In EASY MODE the number ranges from 1 to 10 and you have 3 chances to guess it." << endl;
    cout << "Enter your number:";
    cin >> userChoice;
    if(userChoice == easyChoice){
        cout << "CONGRATULATIONS YOU GOT THE NUMBER." << endl;
        cout << "YOU GOT IT FIRST TRY CONGRATS.";
    }
    else{
         chances--;
         while(userChoice != easyChoice && chances != 0){
            if(userChoice > easyChoice){
                cout << "DAMN THE NUMBER YOU THOUGHT IS LARGER THINK SMALLER(CHANCES LEFT "  << chances << ')' << endl;
                effort++;
            }

            else if(userChoice < easyChoice){
                cout << "DAMN THE NUMBER YOU THOUGHT IS SMALLER THINK LARGER(CHANCES LEFT "  << chances << ')' << endl;
                effort++;
            }

            cout << "TRY AGAIN YOU CAN DO IT:";
            cin >> userChoice;
            chances--;
        }
        if(chances == 0){
            cout << "YOUR CHANCES REACHED 0 BETTER LUCK NEXT TIME :)" << endl;
            cout << "THE NUMBER WAS " << easyChoice << " :)" << endl << endl;
    
        }
        else{
            cout << "CONGRATULATIONS YOU GOT THE NUMBER AFTER " << effort << " TRIES" << endl << endl;
        }
       
    }
   
    



}

void Gamemode::difficultyMedium(){
    int mediumChoice,userChoice,chances = 10,effort=1;
    srand(time(0));
    mediumChoice = 1 + (rand() % 50);
    cout << "YOU HAVE SELECTED MEDIUM MODE!!!!" << endl;
    cout << "In MEDIUM MODE the number ranges from 1 to 50 and you have 10 chances to guess it." << endl;
    cout << "Enter your number:";
    cin >> userChoice;
    if(userChoice == mediumChoice){
        cout << "CONGRATULATIONS YOU GOT THE NUMBER." << endl;
        cout << "YOU GOT IT FIRST TRY CONGRATS.";
    }
    else{
         chances--;
         while(userChoice != mediumChoice && chances != 0){
            if(userChoice > mediumChoice){
                cout << "DAMN THE NUMBER YOU THOUGHT IS LARGER THINK SMALLER(CHANCES LEFT "  << chances << ')' << endl;
                effort++;
            }

            else if(userChoice < mediumChoice){
                cout << "DAMN THE NUMBER YOU THOUGHT IS SMALLER THINK LARGER(CHANCES LEFT "  << chances << ')' << endl;
                effort++;
            }

            cout << "TRY AGAIN YOU CAN DO IT:";
            cin >> userChoice;
            chances--;
        }
        if(chances == 0){
            cout << "YOUR CHANCES REACHED 0 BETTER LUCK NEXT TIME :)" << endl << endl;
            cout << "THE NUMBER WAS " << mediumChoice << " :)" << endl << endl;
        }
        else{
            cout << "CONGRATULATIONS YOU GOT THE NUMBER AFTER " << effort << " TRIES" << endl << endl;
        }
       
    }
}

void Gamemode::difficultyHard(){
    int hardChoice,userChoice,chances = 15,effort=1;
    srand(time(0));
    hardChoice = 1 + (rand() % 100);
    cout << "YOU HAVE SELECTED HARD MODE!!!!" << endl;
    cout << "In HARD MODE the number ranges from 1 to 100 and you have 15 chances to guess it." << endl;
    cout << "Enter your number:";
    cin >> userChoice;
    if(userChoice == hardChoice){
        cout << "CONGRATULATIONS YOU GOT THE NUMBER." << endl;
        cout << "YOU GOT IT FIRST TRY CONGRATS.";
    }
    else{
         chances--;
         while(userChoice != hardChoice && chances != 0){
            if(userChoice > hardChoice){
                cout << "DAMN THE NUMBER YOU THOUGHT IS LARGER THINK SMALLER(CHANCES LEFT "  << chances << ')' << endl;
                effort++;
            }

            else if(userChoice < hardChoice){
                cout << "DAMN THE NUMBER YOU THOUGHT IS SMALLER THINK LARGER(CHANCES LEFT "  << chances << ')' << endl;
                effort++;
            }

            cout << "TRY AGAIN YOU CAN DO IT:";
            cin >> userChoice;
            chances--;
        }
        if(chances == 0){
            cout << "YOUR CHANCES REACHED 0 BETTER LUCK NEXT TIME :)" << endl << endl;
            cout << "THE NUMBER WAS " << hardChoice << " :)" << endl << endl;
        }
        else{
            cout << "CONGRATULATIONS YOU GOT THE NUMBER AFTER " << effort << " TRIES" << endl << endl;
        }
       
    }
}

int main(){
    Gamemode g1;
    
}
