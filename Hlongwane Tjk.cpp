#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    
    // Morse code map
    map<char, string> morse = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."},
        {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."},
        {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"},
        {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
        {'3', "...--"}, {'4', "....-"}, {'5', "....."},
        {'6', "-...."}, {'7', "--..."}, {'8', "---.."},
        {'9', "----."}
    };

    string message;
    string fullMorse = "";

    cout << "Enter a short message in English: ";
    getline(cin, message);

    cout << "\nMorse Code Translation:\n";

    for (char ch : message) {

        // Convert lowercase to uppercase
        ch = toupper(ch);

        // Ignore spaces in letter output
        if (ch == ' ') {
            fullMorse += "       "; // space between words
            continue;
        }

        // Check if character exists in map
        if (morse.find(ch) != morse.end()) {

            // Display each letter and Morse code
            cout << ch << " : " << morse[ch] << endl;

            // Add to full Morse message
            fullMorse += morse[ch] + "   ";
        }
    }

    // Display full Morse code message
    cout << "\nFull Morse Code Message:\n";
    cout << fullMorse << endl;

    return 0;
}
