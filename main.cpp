#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main() {
    std::ifstream file("data.csv");   // file pointer
    std::string line;

    // Check if file opened correctly
    if (!file.is_open()) {
        std::cout << "Error opening file.\n";
        return 1;
    }

    // Read file line by line
    while (std::getline(file, line)) {

        std::stringstream ss(line);   // stringstream for parsing
        std::string temp1, temp2, word;
        int num1, num2;

        // Extract values separated by commas
        std::getline(ss, temp1, ',');
        std::getline(ss, temp2, ',');
        std::getline(ss, word);

        // Convert string numbers to integers
        std::stringstream convert1(temp1);
        convert1 >> num1;

        std::stringstream convert2(temp2);
        convert2 >> num2;

        // Remove leading space from word (if present)
        if (word[0] == ' ')
            word.erase(0, 1);

        int sum = num1 + num2;

        // Print the word sum times
        for (int i = 0; i < sum; i++) {
            std::cout << word << "  ";
        }

        std::cout << std::endl;
    }

    file.close();
    return 0;
}

