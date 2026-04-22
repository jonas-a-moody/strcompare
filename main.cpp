#include <iostream>
#include <string>

void textCompare(std::string a, std::string b) {
    
    // Compare the two strings for equivalency
    if (a == b) {
        std::cout << "Strings are equal."; 
    } else {
        std::cout << "Strings are NOT equal."; 
    }
}

int main(int argc, char *argv[]) {
    // Compare two strings as args and check them for equivalency
    // Usecase: public keys without whitespace
    // Usage: playground <key1> <key2> 

    if (argc != 3) {
        std::cout << "Usage: playground <key1> <key2>\n";
        return 1; 
    }
    textCompare(argv[1], argv[2]);
    return 0; 
} // end main()