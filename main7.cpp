#include <iostream>
#include <fstream>
#include <string>

void encryptFile(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream input(inputFile, std::ios::binary);
    std::ofstream output(outputFile, std::ios::binary);

    char key = 'A'; // Example encryption key

    char byte;
    while (input.get(byte)) {
        byte = byte ^ key;
        output.put(byte);
    }

    std::cout << "File encrypted successfully.\n";
}

int main() {
    std::string inputFile, outputFile;

    std::cout << "Enter the input file name: ";
    std::cin >> inputFile;

    std::cout << "Enter the output file name: ";
    std::cin >> outputFile;

    encryptFile(inputFile, outputFile);

    return 0;
}
