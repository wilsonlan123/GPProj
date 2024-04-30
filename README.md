o Create a README.MD file in the repo that contains:
▪ Identification of the team members.
▪ A description of your game and introduce the game rules.
▪ A list of features that you have implemented and explain how each coding element
1 to 5 listed under the coding requirements aforementioned support your features.
▪ A list of non-standard C/C++ libraries, if any, that are used in your work and integrated
to your code repo. Please also indicate what features in your game are supported by
these libraries.
▪ Compilation and execution instructions. This serves like a "Quick start" of your game.
The teaching team will follow your instructions to compile and run your game.


Code Requirement. Your implementation should include all the following coding elements:
o Generation of random game sets or events
o Data structures for storing game status (e.g., arrays, STL containers)
o Dynamic memory management (e.g., dynamic arrays, linked lists, STL containers)
o File input/output (e.g., for loading/saving game status)
o Program codes in multiple files (recall separate compilation)
o Proper indentation and naming styles
o In-code documentation

[
=======================================================================================
**Team member:**
1. Ho Kin Sang, UID = 3036080006
2. s
3. s
---------------------------------------------------------------------------------------
**Description of the game**
This is a 2-player mini-game party, where you and your friend can compete in 3 games, including NumberMonster, Guess_Your_Luck, and TicTacToe. Whoever wins the most, wins.
**NumberMonster**
In this game,
**Guess_Your_Luck**
In this game, you and your friend will compete in guess the correct **Golden Number**. The dynamic range is initialize between [0,100] inclusive at the beginning of the game. It will modify and be more precise according to your guesses. The first player guess the **Golden Number** wins!
**TicTacToe**
---------------------------------------------------------------------------------------
**Code Requirement**
1. Generation of random game sets or events
--> In the game [NumberMonster] and [Guess_Your_Luck], random target are genereated at the beginning of the game, i.e. The random number monsters in [NumberMonster] and the golden number in [Guess_Your_Luck].
2. Data structure for storing games status.
--> In all three games, array is used to store the games status. Inlucding but not limited to the number of dices left in [NumberMonster], the dynamic range in [Guess_Your_Luck], and the intermeddiate game status of [TicTacToe].
4. File Input/Output
--> 
5. Program codes in multiple files
--> Each game program is in different files. It will only be compiled when it is called.
6. Proper indentation and naming styles
--> Indentation is well constructed for easier understanding, e.g. indent once in every while/for loop. The vriable or function names are also very intuitive, e.g. update_range, target.
---------------------------------------------------------------------------------------
**A list of non-standard C/C++ libraries**
