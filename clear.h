// See if there's an easier way to make it portable
// Put '1' in your operational system ans '0' in the other
#define OS_WINDOWS 1
#define OS_LINUX 0

void clearScreen(){
    #if OS_WINDOWS == 1
        system("cls");
    #endif
    #if OS_LINUX == 1
        system("clear");
    #endif
}
