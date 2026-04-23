#include <iostream>
#include <string>
#include <algorithm>

void textCompare(std::string a, std::string b) {
    
    // Compare the two strings for equivalency
    if (a == b) {
        std::cout << "Strings are equal." << std::endl; 
    } else {
        std::cout << "Strings are NOT equal." << std::endl; 
    }
}

void toLower(std::string& s) {
    // Convert the string to lowercase
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
}

int main(int argc, char *argv[]) {
    // Compare two strings as args and check them for equivalency
    // Usecase: public keys without whitespace
    // Usage: strcompare [-i] <key1> <key2> 
    
    // check for correct number of args
    if (argc < 3 || argc > 4) {
        std::cout << "Usage: strcompare [-i] <key1> <key2>\n";
        return 1; 
    }

    // if the -i flag is present, convert the strings to lowercase before comparing
    if (argv[1] == std::string("-i")) {
        // convert the args to strings
        std::string s1(argv[2]);
        std::string s2(argv[3]); 
        toLower(s1);
        toLower(s2); 
        textCompare(s1, s2); 
        return 0;
    }

    // if there is no flag, compare the strings as they are
    if (argc != 3) {
        std::cout << "Usage: strcompare [-i] <key1> <key2>\n";
        return 1; 
    }
    textCompare(argv[1], argv[2]);
    return 0; 
} // end main()