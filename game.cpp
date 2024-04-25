#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

void fuckYourLifeBingBong()
{
    srand(time(0));
    const int maxLines = 100;
    
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

    for (int i = 0; i < maxLines*5; ++i) {
        std::cout << lines[rand() % maxLines] << std::endl;
        usleep(10000); // Sleep for 0.1 seconds
    }
    int* ptr = nullptr;
    *ptr = 10;
}

int main() {
    
    fuckYourLifeBingBong();
    return 0;
}