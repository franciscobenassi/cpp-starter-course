#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Positive number" << std::endl;
    } else if (number < 0) {
        std::cout << "Negative number" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }

    // Switch example
    char grade;
    std::cout << "Enter your grade (A/B/C/D/F): ";
    std::cin >> grade;
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
        case 'C':
            std::cout << "Well done" << std::endl;
            break;
        case 'D':
            std::cout << "You passed" << std::endl;
            break;
        case 'F':
            std::cout << "Better try again" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
    }
    return 0;
}
