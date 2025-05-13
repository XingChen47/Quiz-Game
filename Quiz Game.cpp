#include <iostream>

int main(){

    std::string questions[] = {"1. Which is my favourite football club? ",
                               "2. Who is my favourite football player?",
                               "3. Who is my favourite basketball player ",
                               "4. What is my age? "};

    std::string options[][4] = {{"A. Real Madrid", "B. Barcelona", "C. Man City", "D. Man United"},
                                {"A. Kevin De bruyne", "B. Lionel Messi", "C. Kun Aguero", "D. Mbappe"},
                                {"A. Kevin Durant", "B. Michael Jordan", "C. LeBron James", "D. Stephen Curry"},
                                {"A. 18", "B. 19", "C. 20", "D. 21"}};

    char answerKey[] = {'C','A','C','D'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    std::cout << "WELCOME TO MY QUIZ GAME!\n";
	for(int i =0; i < size; i++){
        std::cout << "***************************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "***************************************\n";

        for(int j = 0; j < sizeof(options[0])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << '\n';
        }
    
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "***************************************\n";
            std::cout << "You are correct!\n";
            score ++;
        }

        else{
            std::cout << "***************************************\n";
            std::cout << "You are wrong!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    
    }

    std::cout << "***************************************\n";
    std::cout << "*                 RESULTS                 *\n";
    std::cout << "***************************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "TOTAL NUMBER OF QNS: " << size << '\n';
    std::cout << "SCORE " << (score/(double)size)*100 << "%" << '\n';   //note that the '%' must be seperated from the '\n'

    return 0; 
}