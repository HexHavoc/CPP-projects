#include <iostream>
#include <ctime>
using std::cout;
using std::endl;
using std::cin;

class quizFields{
    int choice;
    public:
        quizFields(){
            cout << "THERE ARE THREE QUIZ FIELDS THAT ARE AVAILABLE PLEASE PICK YOURS." << endl;
            cout << "Enter 1 for space quiz, 2 for general knowledge quiz and 3 for map quiz:";
            cin >> choice;
            cout << endl << endl;
            if(choice == 1){
                spaceQuiz();
            }
        }
        void spaceQuiz();
        void gkQuiz();
        void mapQuiz();

};



void quizFields::spaceQuiz(){
    int userAnswer,spaceQuizMarks=0,correctAnswer,questionNumber=1;
    cout << "HELLO YOU HAVE CHOSEN SPACE QUIZ." << endl;
    cout << "THERE WILL BE 10 QUESTIONS WITH OPTIONS.TRY YOUR BEST TO ANSWER THEM." << endl;
    cout << "YOU SHOULD ENTER 1 FOR OPTION A, 2 FOR OPTION B, 3 FOR OPTION C AND 4 FOR OPTION D." << endl;
    cout << "LETS GET STARTED :)" << endl << endl;

    //QUESTION 1
    cout << questionNumber << ") Which mission of NASA brought the first human to the moon?" << endl;
    cout << "A) Apollo program" << endl;
    cout << "B) Gemini program" << endl;
    cout << "C) Mercury program" << endl;
    cout << "D) Artemis program" << endl;

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 1;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Apollo program." << endl << endl;
        questionNumber++; 
    }
    

    //QUESTION 2
    cout << questionNumber << ") Which planet do the moons Oberon and Titania belong to?" << endl;
    cout << "A) Jupiter" << endl;
    cout << "B) Uranus" << endl;
    cout << "C) Neptune" << endl;
    cout << "D) Saturn" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 2;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Uranus." << endl << endl;
        questionNumber++; 
    }

    //QUESTION 3
    cout << questionNumber << ") Which of the following planets is the hottest planet in our solar system?" << endl;
    cout << "A) Jupiter" << endl;
    cout << "B) Mercury" << endl;
    cout << "C) Venus" << endl;
    cout << "D) Saturn" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 3;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Venus." << endl << endl;
        questionNumber++; 
    }

    //QUESTION 4
    cout << questionNumber << ") Which of the following planets is also called The Diamond planet?" << endl;
    cout << "A) Kepler-10b" << endl;
    cout << "B) Gliese 436 b" << endl;
    cout << "C) 55 Cancri e" << endl;
    cout << "D) HD 219134 b" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 3;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS 55 Cancri e." << endl << endl;
        questionNumber++; 
    }

    //QUESTION 5
    cout << questionNumber << ") Which of the following planets in our solar system have no moon?" << endl;
    cout << "A) Venus" << endl;
    cout << "B) Mercury" << endl;
    cout << "C) Mars" << endl;
    cout << "D) Uranus" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 1;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Venus." << endl << endl;
        questionNumber++; 
    }

    //QUESTION 6
    cout << questionNumber << ") Olympus Mons is a large volcanic mountain on which planet?" << endl;
    cout << "A) Jupiter" << endl;
    cout << "B) Neptune" << endl;
    cout << "C) Saturn" << endl;
    cout << "D) Mars" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 4;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Mars(YOU COULD HAVE JUST ELIMINATED ALL THE GAS GIANTS LOL)." << endl << endl;
        questionNumber++; 
    }

    //QUESTION 7
    cout << questionNumber << ") Which galaxy is on a collision course with our galaxy The Milky Way?" << endl;
    cout << "A) Sombrero Galaxy" << endl;
    cout << "B) Bode's Galaxy" << endl;
    cout << "C) Messier 83" << endl;
    cout << "D) Andromeda Galaxy" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 4;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Andromeda Galaxy" << endl << endl;
        questionNumber++; 
    }
   
    //QUESTION 8
    cout << questionNumber << ") In our solar system which planet has diamond rain?" << endl;
    cout << "A) Neptune" << endl;
    cout << "B) Saturn" << endl;
    cout << "C) Jupiter" << endl;
    cout << "D) Venus" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 1;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Neptune" << endl << endl;
        questionNumber++; 
    }

    //QUESTION 9
    cout << questionNumber << ") What is the color of the Sun?" << endl;
    cout << "A) Yellow" << endl;
    cout << "B) Blue" << endl;
    cout << "C) White" << endl;
    cout << "D) Orange" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 3;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS White" << endl << endl;
        questionNumber++; 
    }

    //QUESTION 10
    cout << questionNumber << ") What is the name of the supermassive black hole situated in the center of our galaxy?" << endl;
    cout << "A) Holmberg 15A" << endl;
    cout << "B) Sagittarius A" << endl;
    cout << "C) Cygnus X-1" << endl;
    cout << "D) GRO J1655-40" << endl; 

    cout << "Enter your option:";
    cin >> userAnswer;
    correctAnswer = 2;
    if(userAnswer == correctAnswer){
        cout << "CONGRATS THAT WAS THE RIGHT ANSWER." << endl << endl;
        spaceQuizMarks++;
        questionNumber++;
    }else{
        cout << "NOPE THAT WAS THE WRONG ANSWER." << endl;
        cout << "THE CORRECT ANSWER WAS Sagittarius A" << endl << endl;
        questionNumber++; 
    }

    //RESULT PRINTING
    cout << "OKAY THATS ALL THANK YOU FOR PARTICIPATING IN THIS SPACE QUIZ." << endl << endl;
    cout << "YOU SCORED " << spaceQuizMarks << " OUT OF 10" << endl << endl;
}


int main(){
    quizFields q1;
}
