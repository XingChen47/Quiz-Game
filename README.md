# Quiz Game

A simple C++ console application that lets you play a multiple-choice quiz game. Test your knowledge (or your knowledge of the author's favorites!) and get your score at the end.

## Features

- Four multiple-choice quiz questions
- Instant feedback on each answer
- Final score and performance summary after the quiz
- User-friendly command-line interface

## Installation

### 1. Clone the repository
```sh
git clone https://github.com/XingChen47/Quiz-Game.git
cd Quiz-Game
```

### 2. Compile the program

#### **Linux/macOS**
```sh
g++ -o quiz_game "Quiz Game.cpp"
```

#### **Windows (using MinGW)**
```sh
g++ -o quiz_game.exe "Quiz Game.cpp"
```
*Make sure `g++` is available in your PATH.*

## Usage

Run the compiled program from your terminal:

**Linux/macOS:**
```sh
./quiz_game
```

**Windows:**
```sh
quiz_game.exe
```

You will be presented with each question and four possible answers (A, B, C, D). Enter your choice for each question. Your score and the correct answers will be shown at the end.

**Example Output:**
```
WELCOME TO MY QUIZ GAME!
***************************************
1. Which is my favourite football club? 
***************************************
A. Real Madrid
B. Barcelona
C. Man City
D. Man United
c
***************************************
You are correct!
...
***************************************
*                 RESULTS                 *
***************************************
CORRECT GUESSES: 3
TOTAL NUMBER OF QNS: 4
SCORE 75%
```

## Customization

You can easily add your own questions and answers by editing the `questions`, `options`, and `answerKey` arrays in the source code.


&copy; 2025 GitHub &bull; [Code of Conduct](https://www.contributor-covenant.org/version/2/1/code_of_conduct/code_of_conduct.md) &bull; [MIT License](https://gh.io/mit)
