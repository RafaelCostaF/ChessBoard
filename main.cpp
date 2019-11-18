// This program is used to represent the chess board occupying the less space that is needed in 
// memory (64 bits) without any specification of the piece that is in the board.
// The pieces can be put by an integer that represent this board or putting piece by piece.



// This section of code is used to pause the screen.
        //  " scanf("%c",&garbageForScreenPause); "
        //  " scanf("%c",&garbageForScreenPause); "
// It's implemented this way to make the code portable.


#include <iostream>
#include <stdio.h>
#include <bitset>
#include "clear.h"
#include "boardFunctions.h"

int main(){
    Board board;
    char option;

    // Used to put the pieces
    char rank,file;
    bool thereAreMorePieces = true;

    uint64_t integerToBoolBoard;

    char garbageForScreenPause;

    for(;;){
        clearScreen();
        std::cout << "\n"                                                    << std::endl;
        std::cout << "=========== CHESS BOARD BIT REPRESENTAION ===========" << std::endl;
        std::cout                                                            << std::endl;
        std::cout << "-(1)- Convert the board to an 64bits integer(8Bytes)"  << std::endl;
        std::cout << "-(2)- Put  or take pieces in the board (one by one)."  << std::endl;
        std::cout << "-(3)- Put pieces in the board (by an integer)."        << std::endl;
        std::cout << "-(4)- Print board."                                    << std::endl;
        std::cout << "-(5)- See positions(pieces) in the board."             << std::endl;
        std::cout                                                            << std::endl;
        std::cout << "-(0)- Reset board."                                    << std::endl;
        std::cout << "-(e)- Exit."                                           << std::endl;
        std::cout                                                            << std::endl;
        std::cout << "=====================================================" << std::endl;
        std::cout                                                            << std::endl;
        std::cout << "-= Option : "; 
        std::cin.clear();
        std::cin  >> option; 
        
        if ((option == 'e') || (option == 'E')) return 0; // Char 'Delete' = 127

        switch (option){

            case '1':
                clearScreen();
                std::cout << "\n\n";
                std::cout << "===== BOARD TO INTEGER =====" << std::endl;
                std::cout << "\n\n";
                std::cout << "-= Integer that represent the board : " << board.boolBoardTo64BitsInteger() << "\n\n";
                scanf("%c",&garbageForScreenPause);
                scanf("%c",&garbageForScreenPause);
                break;
            case '2':
                clearScreen();
                std::cout << "\n\n";
                std::cout << "===== PUT OR TAKE PIECE ====" << std::endl;
                std::cout << "\n\n";
                std::cout << "-= If you put a piece where there's another piece,\n";
                std::cout << "-= this piece will be delete.\n\n\n";

                scanf("%c",&garbageForScreenPause);
                scanf("%c",&garbageForScreenPause);
                
                thereAreMorePieces = true;

                while(thereAreMorePieces){
                    clearScreen();
                    std::cout << "\n\n";
                    std::cout << "===== PUT OR TAKE PIECE ====" << std::endl;
                    std::cout << "\n\n";
                    board.printBoard();

                    std::cout << std::endl;
                    std::cout << std::endl;
                    std::cout << "-= Write the rank (1 to 8): ";
                    std::cin.clear();
                    std::cin  >> rank;
                    if ((rank > '8') || (rank < '1')){
                        std::cout << "\nInvalid rank \n" << std::endl;
                        scanf("");
                        scanf("");
                        break; // Returns to the menu
                    }
                    std::cout << "-= Write the file (a to h): ";
                    std::cin.clear();
                    std::cin  >> file;
                    if ((file > 'h') || (file < 'a')){
                        std::cout << "\nInvalid file \n" << std::endl;
                        scanf("");
                        scanf("");
                        break; // Returns to the menu
                    }

                    board.putPieceInBoolBoard(rank,file);

                    clearScreen();
                    std::cout << "\n\n";
                    std::cout << "===== PUT OR TAKE PIECE ====" << std::endl;
                    std::cout << "\n\n";

                    board.printBoard();

                    std::cout << std::endl;
                    std::cout << "-= Do you want to put or take out another piece?\n";
                    std::cout << "-= (1 = Yes || 0 = No ) : ";
                    std::cin.clear();
                    std::cin  >> thereAreMorePieces;
                }
                break;
            
            case '3': 
                clearScreen();
                std::cout << "\n\n";
                std::cout << "===== BOARD TO INTEGER =====" << std::endl;
                std::cout << "\n\n";

                std::cout << "-= Write the integer : ";
                std::cin  >> integerToBoolBoard;
                board.integerToBoolBoard(integerToBoolBoard);
                std::cout << "\n\n";
                scanf("%c",&garbageForScreenPause);
                scanf("%c",&garbageForScreenPause);
                break;
            
            case '4':
                clearScreen();
                std::cout << "\n\n";
                std::cout << "====== PRINTING BOARD ======" << std::endl;
                std::cout << "\n\n";
                board.printBoard();
                std::cout << "\n\n";
                scanf("%c",&garbageForScreenPause);
                scanf("%c",&garbageForScreenPause);
                break;
            case '5':
                clearScreen();
                std::cout << "\n\n";
                std::cout << "==== POSITIONS IN BOARD ====" << std::endl;
                std::cout << "\n\n";
                board.positionsInBoolBoard();
                std::cout << "\n\n";
                scanf("%c",&garbageForScreenPause);
                scanf("%c",&garbageForScreenPause);
                break;
            case '0':
                clearScreen();
                std::cout << "\n\n";
                std::cout << "====== RESETING BOARD ======" << std::endl;
                std::cout << "\n\n";
                board.resetBoolBoard();
                std::cout << "\n\n";
                std::cout << "-= The board has been reseted.\n\n";
                scanf("%c",&garbageForScreenPause);
                scanf("%c",&garbageForScreenPause);
                break;
        }
    }

    return 0;
}
