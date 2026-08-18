#include <iostream>
#include <fstream>
#include <string>
#include <ostream>
#include <filesystem>

int main(){
    std::filesystem::path filePath{"./data/Apache_2k.log"};
    
    std::ifstream inputFile(filePath);
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;
    }

    return 0;
}