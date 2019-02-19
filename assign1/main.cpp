#include <iostream>
#include <string>
#include "cipher.h"

int main()
{
    int input;
    std::string output;

    // take user input
    std::cout << "enter a number: ";
    std::cin >> input;

    // exit with error if non numeric input
    if (std::cin.fail())
    {
        std::cout << "invalid input" << std::endl;
        return 1;
    }

    output = std::to_string(input);
    switch(output.length())
    {
        case 2:
        case 3:
            output = TwoThreeDig(output);
            break;

        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            output = FourDig(output);
            break;

        default:
            std::cout << "invalid length of number" << std::endl;
            return 1;
    }
    
    std::cout << output << std::endl;

    return 0;
}
