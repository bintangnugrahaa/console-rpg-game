# Console RPG Game

This is a simple console RPG game project written in C++. The game allows players to create characters, battle monsters, and collect experience and gold.

## Table of Contents

- [Key Features](#key-features)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [How to Play](#how-to-play)
- [Credits](#credits)
- [Contributions](#contributions)
- [Contact](#contact)
- [Notes](#notes)

## Key Features

- Create characters with various classes that have unique attributes.
- Battle against monsters with options to attack or flee.
- Collect experience and gold from battles.
- Heal the character using gold.
- Save and continue the game.

## Project Structure

- `main.c`: Main file that manages the game flow and contains the `main()` function.
- `classes.h`: Defines structures for character classes.
- `monsters.h`: Defines structures for monsters in the game.
- `character.h`: Defines structures for the player character.
- `gameplay.h`: Contains function declarations that manage the game, such as `fight()`, `newGame()`, etc.
- `file_handling.h`: Contains function declarations that handle data storage and retrieval from files.
- `user_interface.h`: Contains function declarations for displaying menus and statuses to the player.

## Getting Started

To compile and run the game, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the project directory.
3. Compile the code using a C++ compiler. For example:
   ```shell
   g++ main.c -o main
   ./main
   ```

## How to Play

1. Choose Game Mode:

   - Select "New Game" to start a new adventure.
   - Choose "Continue" to resume an existing game.

2. Character Creation:

   - If starting a new game, provide a name for your character.
   - Choose a class for your character: Warrior, Rogue, or Archer.

3. Main Game Menu:

   - After character creation, you'll enter the main menu.
   - The main menu displays your character's status and available actions.

4. Battle Monsters:

   - Opt to fight against monsters from the main menu.
   - Engage in battles in the battle menu.
   - Choose to attack or flee from the monster.
   - Win battles to earn experience and gold.

5. Heal Your Character:

   - Spend gold to fully restore your character's health.

6. Save Progress:

   - At any point in the game, you can save your progress.
   - Select the "Save" option in the main menu.

7. Exit the Game:
   - When you're done playing, select the "Quit" option to exit.

## Credits

- Idea and implementation: Muhammad Bintang Nugraha

## Contributions

Contributions to this project are welcome. If you have ideas for improvements, feel free to open an issue or submit a pull request.

## Contact

For questions or inquiries, please contact the project author:

- Name: Muhammad Bintang Nugraha
- Email: djakarta1973@gmail.com

## Notes

- This project is developed for educational and entertainment purposes.
- The program runs within a console/command prompt environment.
- Ensure you have a suitable C++ compiler to run this program.# console-rpg-game
