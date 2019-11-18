// Manipulations with the storage of the board

class BoardBinaryFile{

public: 
    std::string formattingFileName(std::string fileName){
        // Ex.: Input  = fileName  
        //      Output = "fileName.txt" 

        // Ends with .txt" and putting '0' to create a space to move the characters of the beginning foward 
        fileName += "0.txt\""; 

        // Moving the characters to the next position (+1)
        for (unsigned short i = fileName.length() - 6 ; i > 0 ; i--){
            fileName[i] = fileName[i-1];
        } 

        // The name of the file must start with " "
        fileName[0] = '"';
    }
};
