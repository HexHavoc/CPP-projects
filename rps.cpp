#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

char rps[3] = {'p','s','r'};
char userChoice;

int randomizer(){
    int random;
    srand(time(0));
    random =  rand() % 3;
    return random;
    
}
char computerChoice = rps[randomizer()];

char userDecision(){
    char choice;
    cout << "Enter r for Rock, p for Paper and s for Scissors or anything else to exit." << endl;
    cin >> choice;
    return tolower(choice);

}

int main(){
    int run = 1;
    while(run){
        cout << "WELCOME TO ROCK,PAPER AND SCISSORS" << endl;
        userChoice = userDecision();
        if(computerChoice == userChoice){
            cout << "DRAW!!!!" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }

        else if(computerChoice == 'p' && userChoice == 'r'){
            cout << "COMPUTER WINS" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }
        else if(computerChoice == 'r' && userChoice == 'p'){
            cout << "USER WINS" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }

        else if(computerChoice == 'r' && userChoice == 's'){
            cout << "COMPUTER WINS" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }
        else if(computerChoice == 's' && userChoice == 'r'){
            cout << "USER WINS" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }

        else if(computerChoice == 's' && userChoice == 'p'){
            cout << "COMPUTER WINS" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }
        else if(computerChoice == 'p' && userChoice == 's'){
            cout << "USER WINS" << endl;
            cout << "You picked: " << userChoice << endl;
            cout << "Computer picked: " << computerChoice << endl;
            cout << endl;
        }
        else{
            run = 0;
        }



    }
}