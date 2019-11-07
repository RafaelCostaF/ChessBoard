/*
 
Class that has the functions to manipulate the chess board.

- Initialize the board.
- Put pieces in the board.
- Print the board to the user (screen).
- Convert the board to an 64 bits integer (8 Bytes).
- Print the positions in the board to the user (screen).
- Convert an 64 bits integer to a 64 bits board.

*/

class Board{

private:
    bool boolBoard[64];             // To represent the board
    uint64_t intBoard64Bits = 0;   // To register the board as an integer 


public:
    // Initializing the board without pieces
    Board(){
        for (int i = 0 ; i < 64 ; i++){
            this->boolBoard[i] = false;
        }
    }


    // Putting pieces on the board 
    bool putPieceInBoolBoard(unsigned short rank, unsigned short file){

        rank -= 48; // (Number) Makes the char value of ascii becomes a number (1 in ascii is 49 ; 49 - 48 = 1)
        file -= 96; // (Letter) Makes the char value of ascii becomes a number (a in ascii is 97 ; 97 - 96 = 1)

        // Rank 1 = line 0 (rank-1) * 8
        // Rank 2 = line 1 (rank-1) * 8
        // Rank 3 = line 2 (rank-1) * 8

        unsigned short pos = (rank-1)*8 +file - 1 ; // The board have the spaces from 0 to 63

        if (this->boolBoard[pos] == false){
            this->boolBoard[pos] = true;
            return true;   // New piece on the board.
        }
        else return false; // Already has a piece there.

        // B = Black || W = White
        //
        // BOARD :
        //
        //   A-B-C-D-E-F-G-H
        // 1 W B W B W B W B
        // 2 B W B W B W B W
        // 3 W B W B W B W B
        // 4 B W B W B W B W
        // 5 W B W B W B W B
        // 6 B W B W B W B W
        // 7 W B W B W B W B
        // 8 B W B W B W B W

    }
    

    // Printing the board to the user (0 = No Pieces and 1 = Pieces)
    void printBoard(){
        char rank = '1';
        char file = 'A';

        std::cout << "  "; // Four blank spaces to print the 'files'

        // Printing 'files'
        for (file ; file < 'A'+ 8 ; file++){
            if (file <'H') std::cout << file << "-";
            else std::cout << file; // If it's the last 'file', there's no need for the "-"
        }

        // Printing 'ranks' and the board
        for (char i = 0 ; i < 64 ; i++){
            if (i%8 == 0) {
                std::cout << "\n" << rank << " "; // Next Line and 'rank'
                rank++;
            }
            std::cout << this->board[i] << " "; // Printing board
        }
        std::cout << "\n";
    }


    // Converting the board to 64 bits in format of an int(64 bits integer)
    uint64_t boolBoardTo64BitsInteger(){
        uint64_t auxPower = 1;
        for(int i = 63 ; i > -1 ; i--){
            this->intBoard64Bits += this->boolBoard[i] * auxPower ;
            auxPower = auxPower << 1;
        }
        return intBoard64Bits;
    }


    void positionsInBoolBoard(){
        char rank; // NUMBER
        char file; // LETTER

        for (int i = 0 ; i < 64 ; i++){
            if (this->boolBoard[i] == true){
                file = i%8 + 49;      // (Letter) Makes the number becomes the char "a" in ascii (a in ascii is 97 ; 1 + 96 = 97) 
                rank = (i+1)/8 + 97 ; // (Number) Makes the number becomes the char "1" in ascii (1 in ascii is 49 ; 1 + 48 = 49)
                std::cout << file << rank << std::endl;
            }
        }
    }

    void integerToBoolBoard(uint64_t intBoard64Bits){
        std::bitset<64> integerToBoolBoard = intBoard64Bits;

        // Converting the integer that represents the board into the bool board
        unsigned short j = 63;
        for (unsigned short i = 0 ; i < 64 ; i++){
            this->boolBoard[i] = integerToBoolBoard[j];
            j--;
        }
    }

};
