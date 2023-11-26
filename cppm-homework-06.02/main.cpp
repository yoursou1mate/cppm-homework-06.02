//
//  main.cpp
//  cppm-homework-06.02
//
//  Created by a1ex on 11/22/23.
//

#include "counter.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    std::string answer;
    std::string no;
    char a;
    int i;
    
    std::cout << "Do  you want to enter a number for the counter? Enter yes or no: ";
    std::cin >> answer;
    
if (answer == "yes")
    {
        std::cout << '\n';
        std::cout << "Enter a number for the counter: " ;
        std::cin >> i;
        Counter counter (i);
        for ( ; ; )
        {
            std::cout << '\n' << "Enter ('+', '-', '=' or 'x'): ";
            std::cin >> a;
            if (a == '+')
            {
                counter.counter_plus();
            }
            else if (a == '-')
            {
                counter.counter_minus();
            }
            else if (a == '=')
            {
                std::cout << counter.counter_value();
            }
            else if (a == 'x')
            {
                std::cout << "Good bye!" << std::endl;
                break;
            }
        }
        
    } else
    {
        Counter counter;
        for ( ; ; )
        {
            std::cout << '\n' << "Enter ('+', '-', '=' or 'x'): ";
            std::cin >> a;
            if (a == '+')
            {
                counter.counter_plus();
            }
            else if (a == '-')
            {
                counter.counter_minus();
            }
            else if (a == '=')
            {
                std::cout << counter.counter_value();
            }
            else if (a == 'x')
            {
                std::cout << "Good bye!" << std::endl;
                break;
            }
        }
        
    }
    return 0;
}
