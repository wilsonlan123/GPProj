#include <iostream>
#include <string>

// Function declarations for the games
void playGameOne();  // Assuming this is the function for the first game
void playGameTwo();  // Assuming this is the function for the second game
void playGameThree();  // Function for the Tic-Tac-Toe game

void playGameOne() {
    // Placeholder: Implement or call the relevant function for game one
    std::cout << "Playing Game One...\n";
}

void playGameTwo() {
    // Placeholder: Implement or call the relevant function for game two
    std::cout << "Playing Game Two...\n";
}

void playGameThree() {
    // Placeholder: Implement or call the relevant function for Tic-Tac-Toe
    std::cout << "Playing Tic-Tac-Toe...\n";
}

int main() {
    int choice = 0;

    while (true) {
        std::cout << "\n*** Game Menu ***\n";
        std::cout << "1. Play Game One\n";
        std::cout << "2. Play Game Two\n";
        std::cout << "3. Play Tic-Tac-Toe\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;


        if (std::cin.fail()) {
            std::cin.clear();  // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore wrong input
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                playGameOne();
                break;
            case 2:
                playGameTwo();
                break;
            case 3:
                playGameThree();
                break;
            case 4:
                std::cout << "Exiting the game menu.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please select a valid option from the menu.\n";
                break;
        }
    }

    return 0;
}


