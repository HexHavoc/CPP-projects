#include <iostream>
#include <ctime>
#include <cctype>
using std::cout;
using std::endl;
using std::cin;

char rps[6] = {'p','s','r','p','s','r'};
char userChoice;

char userDecision(){
    char choice;
    cout << "Enter r for Rock, p for Paper and s for Scissors or anything else to exit:";
    cin >> choice;
    return tolower(choice);

}

int main(){
    int random,run = 1;
    while(run){
        srand(time(0));
        random =  rand() % 6;
        cout << "WELCOME TO ROCK,PAPER AND SCISSORS" << endl;
        userChoice = userDecision();
        char computerChoice = rps[random];

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