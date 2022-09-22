#include <iostream>
#include <fstream>
#include <limits>
using std::cout; using std::string; using std::cin;

// written by chapel1337
// made on 9/21/2022

std::ofstream outputFile{ "output.txt" };

void spam(string input)
{
    for (long i{ 0 }; i < std::numeric_limits<int>::max(); i++)
    {
        outputFile << input << '\n';
    }
    cout << "done\n"; // the user will probably never get to see this
}

int main()
{
    string inputWord{};

    cout << "input a word: ";
    cin >> inputWord;

    spam(inputWord);
}