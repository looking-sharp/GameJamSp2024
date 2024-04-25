#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <iomanip>

#pragma region MainGambleing
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

#pragma region TickTackToe
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
    //reset board
    for(int i = 0; i < 3; i++)
    {
        for(int k = 0; k < 3; k++)
        {
            TTT[i][k]= " ";
        }
    }
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
        std::cout << "Enter a row (1-3): ";
        std::cin >> playerRow;
        std::cout << "Enter a column (1-3): ";
        std::cin >> playerCol;
        TTT[playerRow-1][playerCol-1] = "X";
        printTickTackToe();
        //let the coputer choose a spot
        while(TTT[compRow][compCol] != " ")
        {
            compRow = rand() % 3;
            compCol = rand() % 3;
        }
        TTT[compRow][compCol] = "O";
        std::cout << "COmputer moves to (" << compRow+1 << "," << compCol+1 << ")" << std::endl;
        printTickTackToe();
        int check = checkForTickTackTowWin();
        // won, you can go back to main game now
        if (check == 0)
        {
            hasWonTTT = true;
            std::cout << "You win tick tack toe! You can go back to gambeling now." << std::endl;
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

#pragma region russianRoulette


#pragma endregion

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
        if(rand() % 7 == 1 && turn >= 2)
        {
            std::cout<< "Whoops! You're playing tick tack toe now." << std::endl;
            printTickTackToe();
            playTickTackToe();
        }
        //produces number from 1-100
        int chanceToBeat = rand() % 101;
        //Update chance values (increases as you play, causes crash)
        if(chance <= chanceToBeat)
        {
            fuckYourLifeBingBong();
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
    return true;
}

//MAIN

int main() {
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