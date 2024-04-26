#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iomanip>
#include <vector>
#include <string>

//clear screen
void clrscr()
{
    std::cout << "\033c";
}

#pragma region main gambleing
//Code to "crash" computer
void fuckYourLifeBingBong()
{
    srand(time(0));
    const int maxLines = 100;
    //List of 100 erors
    std::string lines[maxLines] = {
        "Segmentation fault (core dumped)",
        "Bus error (core dumped)",
        "Floating point exception (core dumped)",
        "error: unexpected token '}'",
        "error: expected ';' after expression",
        "error: variable 'x' declared but not used",
        "error: 'nullptr' was not declared in this scope",
        "error: invalid conversion from 'int' to 'const char*'",
        "error: 'std' has not been declared",
        "error: incomplete type 'T' used in nested name specifier",
        "error: stray '#' in program",
        "error: expected primary-expression before '<<' token",
        "error: conflicting declaration 'int x'",
        "error: ambiguous overload for 'operator<<' (operand types are 'std::ostream {aka std::basic_ostream<char>}' and 'const char[4]')",
        "error: invalid operands of types 'int' and 'const char [6]' to binary 'operator<'",
        "error: 'class std::vector<int>' has no member named 'push_back'",
        "error: reference to 'i' is ambiguous",
        "error: expected constructor, destructor, or type conversion before ';' token",
        "error: no matching function for call to 'std::vector<int>::resize'",
        "error: 'delete' does not name a type",
        "error: expected initializer before '<' token",
        "error: invalid use of non-static data member 'x'",
        "error: too few arguments to function 'func'",
        "error: 'x' was not declared in this scope",
        "error: expected unqualified-id before 'for'",
        "error: function 'func' is not visible",
        "error: 'x' cannot be used as a function",
        "error: no matching function for call to 'std::map<int, int>::size'",
        "error: expected primary-expression before ')' token",
        "error: 'int main()' redeclared as different kind of symbol",
        "error: 'class std::vector<int>' has no member named 'begin'",
        "error: 'class std::vector<int>' has no member named 'end'",
        "error: no matching function for call to 'std::map<int, int>::find'",
        "error: expected unqualified-id before numeric constant",
        "error: 'class std::vector<int>' has no member named 'pop_back'",
        "error: expected ',' or ';' before '{' token",
        "error: expected identifier before '(' token",
        "error: redefinition of 'int main()'",
        "error: expected '}' at end of input",
        "error: too many arguments to function 'func'",
        "error: 'class std::vector<int>' has no member named 'size'",
        "error: 'class std::vector<int>' has no member named 'clear'",
        "error: 'class std::vector<int>' has no member named 'erase'",
        "error: 'class std::vector<int>' has no member named 'insert'",
        "error: expected primary-expression before 'else'",
        "error: no matching function for call to 'std::vector<int>::begin()'",
        "error: expected primary-expression before 'return'",
        "error: expected ',' or '...' before '&' token",
        "error: 'class std::vector<int>' has no member named 'at'",
        "error: 'class std::vector<int>' has no member named 'front'",
        "error: 'class std::vector<int>' has no member named 'back'",
        "error: 'class std::vector<int>' has no member named 'data'",
        "error: 'class std::vector<int>' has no member named 'max_size'",
        "error: 'class std::vector<int>' has no member named 'reserve'",
        "error: 'class std::vector<int>' has no member named 'capacity'",
        "error: 'class std::vector<int>' has no member named 'empty'",
        "error: 'class std::vector<int>' has no member named 'operator[]'",
        "error: expected primary-expression before 'while'",
        "error: 'class std::vector<int>' has no member named 'push_front'",
        "error: 'class std::vector<int>' has no member named 'emplace_back'",
        "error: 'class std::vector<int>' has no member named 'emplace'",
        "error: 'class std::vector<int>' has no member named 'shrink_to_fit'",
        "error: 'class std::vector<int>' has no member named 'swap'",
        "error: 'class std::vector<int>' has no member named 'assign'",
        "error: 'class std::vector<int>' has no member named 'resize'",
        "error: 'class std::vector<int>' has no member named 'insert_or_assign'",
        "error: 'class std::vector<int>' has no member named 'merge'",
        "error: 'class std::vector<int>' has no member named 'extract'",
        "error: 'class std::vector<int>' has no member named 'min_size'",
        "error: 'class std::vector<int>' has no member named 'erase_if'",
        "error: 'class std::vector<int>' has no member named 'find_or_construct'",
        "error: 'class std::vector<int>' has no member named 'emplace_hint'",
        "error: 'class std::vector<int>' has no member named 'to_vector'",
        "error: 'class std::vector<int>' has no member named 'to_set'",
        "error: 'class std::vector<int>' has no member named 'to_map'",
        "error: 'class std::vector<int>' has no member named 'to_linked_list'",
        "error: 'class std::vector<int>' has no member named 'to_queue'",
        "error: 'class std::vector<int>' has no member named 'to_stack'",
        "error: 'class std::vector<int>' has no member named 'to_priority_queue'",
        "error: 'class std::vector<int>' has no member named 'to_binary_search_tree'",
        "error: 'class std::vector<int>' has no member named 'to_heap'",
        "error: 'class std::vector<int>' has no member named 'to_hash_map'",
        "error: 'class std::vector<int>' has no member named 'to_hash_set'",
        "error: 'class std::vector<int>' has no member named 'to_linked_hash_map'",
        "error: 'class std::vector<int>' has no member named 'to_linked_hash_set'",
        "error: 'class std::vector<int>' has no member named 'to_priority_queue'",
        "error: 'class std::vector<int>' has no member named 'to_binary_search_tree'",
        "error: 'class std::vector<int>' has no member named 'to_heap'",
        "error: 'class std::vector<int>' has no member named 'to_hash_map'",
        "error: 'class std::vector<int>' has no member named 'to_hash_set'",
        "error: 'class std::vector<int>' has no member named 'to_linked_hash_map'",
        "error: 'class std::vector<int>' has no member named 'to_linked_hash_set'",
        "error: 'kill yourself'",
        "error: 'I fucked your mother'",
        "error: 'I will eat you'",
        "error: 'I'm coming for that booty'",
        "error: 'Fuck ya life, bing bong'",
        "error: 'I'm behind you'",
        "error: 'AHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH'",
        "error: 'Masterchief, what are you doing in that discord server?'",
    };
    //print 500 errors
    for (int i = 0; i < maxLines*5; ++i) {
        std::cout << lines[rand() % maxLines] << std::endl;
        usleep(10000); // Sleep for 0.1 seconds
    }
    int* ptr = nullptr;
    *ptr = 10;
}

//variables for main gambeling
double  money = 0;
int chance = 100;
int moneyGained = 0;
int turn = 0;

//take money and format it s $-.--
std::string formatMoney()
{
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "$" << money;
    return ss.str();
}
#pragma endregion

#pragma region tick tack toe
// TICK TACK TOE

//Tick tack toe variables
std::string TTT[3][3]{
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "},
};
bool hasWonTTT = false;

//print the tick tack toe board
void printTickTackToe()
{
    std::cout << "  1   2   3" << std::endl;
    for(int i = 0; i < 3; i++)
    {
        std::cout << i+1 << " " << TTT[i][0] << " | " << TTT[i][1] << " | " << TTT[i][2] << std::endl;
        std::cout << " -----------" << std::endl;
    }
}

//check to see if someone won tick tack toe
int checkForTickTackTowWin()
{
    //check for vertical wins
    for(int r = 0; r < 3; r++)
    {
        if(TTT[r][0] == "X" && TTT[r][1] == "X" && TTT[r][2] == "X")
        {
            //you win
            return 0;
        }
        else if(TTT[r][0] == "O" && TTT[r][1] == "O" && TTT[r][2] == "O")
        {
            //comp wins
            return 1;
        }
    }
    //check for horizontal wins
    for(int c = 0; c < 3; c++)
    {
        if(TTT[0][c] == "X" && TTT[1][c] == "X" && TTT[2][c] == "X")
        {
            //you win
            return 0;
        }
        else if(TTT[0][c] == "O" && TTT[1][c] == "O" && TTT[2][c] == "O")
        {
            //comp wins
            return 1;
        }
    }
    //Check for diagonal wins
    if(TTT[0][0] == "X" && TTT[1][1] == "X" && TTT[2][2] == "X")
    {
        //you win
        return 0;
    }
    else if(TTT[0][0] == "O" && TTT[1][1] == "O" && TTT[2][2] == "O")
    {
        //comp wins
        return 1;
    }
    if(TTT[0][2] == "X" && TTT[1][1] == "X" && TTT[2][0] == "X")
    {
        //you win
        return 0;
    }
    else if(TTT[0][2] == "O" && TTT[1][1] == "O" && TTT[2][0] == "O")
    {
        //comp wins
        return 1;
    }
    for(int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (TTT[i][k] == " ")
            {
                //you are still going
                return 3;
            }
        }
    }
    //you tied
    return 2;
}

//tick tack toe logic
void playTickTackToe()
{
    hasWonTTT = false;
    //reset board
    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            TTT[i][k]= " ";
        }
    }
    printTickTackToe();
    //update random seed
    srand(time(0));
    int playerRow;
    int playerCol;
    int compRow = rand() % 3;
    int compCol = rand() % 3;
    //play tick tack toe
    while(!hasWonTTT)
    {
        //update seed
        srand(time(0));
        bool legalMove = false;
        //grab move from player
        while(!legalMove)
        {
            std::cout << "Enter a row (1-3): ";
            std::cin >> playerRow;
            std::cout << "Enter a column (1-3): ";
            std::cin >> playerCol;
            if(TTT[playerRow-1][playerCol-1] == " " && playerRow <= 3 && playerRow >= 0 && playerCol <= 3 && playerCol >= 0 )
            {
                legalMove = true;
            }
            else
            {
                std::cout<< "Illegal move, try again" << std::endl;
            }
        }
        TTT[playerRow-1][playerCol-1] = "X";
        clrscr();
        //let the coputer choose a spot
        while(TTT[compRow][compCol] != " ")
        {
            compRow = rand() % 3;
            compCol = rand() % 3;
        }
        TTT[compRow][compCol] = "O";
        std::cout << "Computer moves to (" << compRow+1 << "," << compCol+1 << ")" << std::endl;
        printTickTackToe();
        int check = checkForTickTackTowWin();
        // won, you can go back to main game now
        if (check == 0)
        {
            hasWonTTT = true;
            std::cout << "You win tick tack toe! You can go back to gambeling now." << std::endl << std::endl;
        }
        //you lost, reset board
        else if(check == 1)
        {
            std::cout << "You lost! Try again:" << std::endl;
            for(int i = 0; i < 3; i++)
            {
                for(int k = 0; k < 3; k++)
                {
                    TTT[i][k]= " ";
                }
            }
        }
        //you tied, reset board
        else if(check == 2)
        {
            std::cout << "You tied! Try again:" << std::endl;
            for(int i = 0; i < 3; i++)
            {
                for(int k = 0; k < 3; k++)
                {
                    TTT[i][k]= " ";
                }
            }
        }
    }
}
#pragma endregion

#pragma region russian roulette

//print russian roulette board
void printRussianRoulette()
{
    std::cout << std::endl;
    std::cout << "               {?}" << std::endl;
    std::cout << "          {?}       {?}" << std::endl;
    std::cout << std::endl;
    std::cout << "          {?}       {?}" << std::endl;
    std::cout << "               {?}" << std::endl;
    std::cout << std::endl;
}

//Play russian roulette game
void playRussianRoulette()
{
    while (true)
    {
        printRussianRoulette();
        //do Player input, reset random
        srand(time(0));
        int numTillBullet = rand() % 6;
        int input;
        std::cout << "Choose to spin (1) or shoot (0): ";
        std::cin >> input;
        //do spin
        if(input == 1)
        {
            usleep(1000000);
            printRussianRoulette();
            //reset bullet amount
            numTillBullet = rand() % 6;
            //force player to shoot themselves
            std::cout << "Shoot yourself (0): ";
            std::cin >> input;
            input = 0;
        }
        //player chooses to shoot themselves
        if(input == 0)
        {
            //they lose, cause crash sequence
            if(numTillBullet == 0)
            {
                fuckYourLifeBingBong();
            }
            //you survived the turn
            else
            {
                std::cout << "You survive, computer's turn." << std::endl << std::endl;
                numTillBullet--;
            }
        }
        //make computer play
        //Determine if computer spins or shoots (favor on shoots)
        bool robotChoice = rand() % 6 == 0;
        //robot spins
        if(robotChoice)
        {
            //reset bullet amount
            numTillBullet = rand() % 6;
            std::cout << "Computer choses to spin" << std::endl;
            std::cout << "Computer choses to shoot itself" <<std::endl;
            if(numTillBullet == 0)
            {
                //you win, computer shot itself
                std::cout << "Computer shoots itself, you win!" << std::endl << std::endl;
                break;
            }
            else
            {
                //computer survived, your turn
                std::cout << "Computer survives, your turn." << std::endl << std::endl;
                numTillBullet--;
            }
        }
        //computer choses to shoot itself
        else
        {
            std::cout << "Computer choses to shoot itself" << std::endl;
            if(numTillBullet == 0)
            {
                //you win, computer shot itself
                std::cout << "Computer shoots itself, you win!" << std::endl << std::endl;
                break;
            }
            else
            {
                //computer survived, your turn
                std::cout << "Computer survives, your turn." << std::endl << std::endl;
                numTillBullet--;
            }
        }
    }
}

#pragma endregion

#pragma region hangman
std::string chooseRandomWord() {
    std::vector<std::string> words = {"apple", "banana", "orange", "grape", "strawberry", "watermelon"};
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % words.size();
    return words[randomIndex];
}

// Function to check if a letter is in the word
bool isLetterInWord(char letter, const std::string& word) {
    for (char c : word) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

// Function to display the current state of the word
void displayWord(const std::string& word, const std::vector<bool>& revealedLetters) {
    for (size_t i = 0; i < word.size(); ++i) {
        if (revealedLetters[i]) {
            std::cout << word[i] << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

// Function to play the Hangman game
void playHangman() {
    std::string word = chooseRandomWord();
    std::vector<bool> revealedLetters(word.size(), false);
    int incorrectAttempts = 0;
    int maxAttempts = 5; // Set the maximum number of incorrect attempts
    if(word.size() > 7)
    {
        maxAttempts = word.size() - 2;
    }

    std::cout << "Try to guess the word.\n";

    while (incorrectAttempts < maxAttempts) {
        std::cout << "\nWord: ";
        displayWord(word, revealedLetters);

        std::cout << "Guess a letter: ";
        char guess;
        std::cin >> guess;

        if (isLetterInWord(guess, word)) {
            std::cout << "Correct guess!\n";
            // Update revealedLetters to reveal the guessed letter
            for (size_t i = 0; i < word.size(); ++i) {
                if (word[i] == guess) {
                    revealedLetters[i] = true;
                }
            }
        } else {
            std::cout << "Incorrect guess.\n";
            ++incorrectAttempts;
            std::cout << "Attempts remaining: " << maxAttempts - incorrectAttempts << std::endl;
        }

        // Check if all letters have been revealed
        bool allLettersRevealed = true;
        for (bool revealed : revealedLetters) {
            if (!revealed) {
                allLettersRevealed = false;
                break;
            }
        }

        if (allLettersRevealed) {
            std::cout << "\nCongratulations! You guessed the word: " << word << std::endl;
            return;
        }
    }
    clrscr();
    std::cout << "\nSorry, you ran out of attempts. The word was: " << word << std::endl;
    playHangman();
}

#pragma endregion

#pragma region setup and gameplay
//set up and introduction code
int randomEventChance = 5;
void setup()
{
    clrscr();
    std::cout << "Welcome to funGame.cpp! Here's the rules:" << std::endl;
    std::cout << "  1. Make as much money as possible" << std::endl;
    std::cout << "  2. I didn't add error handeling to don't type in wrong stuff" << std::endl;
    std::cout << "  3. This should be played on liux terminal / ENGR servers" << std::endl;
    std::cout << "  4. No crying" << std::endl;
    std::cout << "Just follow the prompts and you'll be fine!" << std::endl;
    std::cout << "Type anything to continue or type 'settings' to access settings" << std::endl;
    std::string input;
    std::cin >> input;
    int input2 = 0; 
    //allow user to change settings
    if(input == "settings")
    {
        //keep prompting user until they type 0
        while(true)
        {
            std::cout << std::endl << "Type in the number for the setting you wish to change (or type 0 to leave):" << std::endl;
            std::cout << "  1. Random Event Chance: " << randomEventChance << " (Lower number = greater chance)" << std::endl;
            std::cin >> input2;
            //user is done editing settings, return to game
            if(input2 == 0)
            {
                clrscr();
                break;
            }
            //allow user to change the 1 setting
            else if (input2 == 1)
            {
                std::cout << "Enter a new value for Random Event Chance: ";
                std::cin >> randomEventChance;
            }
        }
    }
    //user goes straight to game
    else
    {
        std::cout << std::endl;
        clrscr();
    }
}

//Gameplay loop, main control system
bool gameplayLoop()
{
    //reset random seed
    srand(time(0));
    turn++;
    std::cout << "You have " << formatMoney() << ", what do you want to do?" << std::endl;
    std::cout << "(1) try and get more, (0) cash out: ";
    int choice = 0;
    std::cin >> choice;
    std::cout << std::endl;
    if(choice == 0)
    {
        //you choose to cash out
        return true;
    }
    else if(choice == 1)
    {
        //chose to try and get more money
        //random chance you play tick tack toe
        if(rand() % randomEventChance == 1 && turn >= 2)
        {
            int randomchoice = rand();
            if(randomchoice % 2== 0)
            {
                clrscr();
                std::cout << "Whoops! You're playing tick tack toe now." << std::endl;
                playTickTackToe();
            }
            else
            {
                clrscr();
                std::cout << "Whoops! You're playing hangman toe now." << std::endl;
                playHangman();
            }
        }
        else
        {
            //produces number from 1-100
            int chanceToBeat = rand() % 101;
            //Update chance values (increases as you play, causes crash)
            if(chance <= chanceToBeat)
            {
                clrscr();
                std::cout << "Whoops! You got greedy. Now you're playing russian roulette." << std::endl;
                playRussianRoulette();
                std::cout << "Your chance of getting money has increased!" << std::endl;
                chance += rand() % 50;
            }
            else
            {
                //add money at a logrythmic rate 
                moneyGained += (rand() % (1000 * turn));
                money += moneyGained / 100.0;
                //reduse chance to suceed random amount.
                chance -= rand() % 5;
                //make sue chance can't be < 0
                if(chance < 0)
                {
                    chance = 0;
                }
            }
            //you fucked it if you got here
            return false;
        }
    }
    return false;
}
#pragma endregion
//MAIN


int main() {
    setup();
    while(true)
    {
        //do th gameplay loop, check if player has cashed out
        if(gameplayLoop())
        {
            //has cashed out, create message
            std::cout << "You ended with " << formatMoney();
            int random = rand() % 6;
            std::string outputs[6] = {
                ". Rookie numbers, you can do better",
                ". Wow, only that much? Jesus you suck",
                ". Most gamblers quit before they make their big hit, keep going?",
                ". I bet I could beat that.",
                ". Jesus you're bad at this",
                ". Try again, no balls"
            };
            std::cout << outputs[random] << std::endl;
            return 0;
        }
    }
    return 1;
}