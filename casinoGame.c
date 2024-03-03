// 1st Project - Casino Game in C programming

#include <stdio.h>
#include <string.h>

void getInput();
void getGame(char);

int main(){

    char input;

    printf("\t\tWelcom to Casino Game\t\t");
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t|\n");
    printf("|\tA Don \t\t\t\t\t\t|\n");
    printf("|\tB Amar Akbar Anthony \t\t\t\t|\n");
    printf("|\tC Sahib Biwi or Ghulam \t\t\t\t|\n");
    printf("|\tD Dharam Veer \t\t\t\t\t|\n");
    printf("|\tE Kiss Kiss Ko Pyar Karoon \t\t\t|\n");
    printf("|\tF Ghulam \t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t|");
    printf("\n---------------------------------------------------------\n");
    printf("\n\n");

    printf("Choose Any game from the above: "); // user need to choose alphabet like a b c etc..
    scanf("%c", &input);
    input = tolower(input);
    getGame(input);

    return 0;
}

void getGame(char input){

    switch(input){
        case 'a':
            printf("\t\tDon\t\t\n");
            break;

        case 'b':
            printf("\t\tAmar Akbar Anthony\t\t\n");
            break;

        case 'c':
            printf("\t\tSahib Biwi or Ghulam\t\t\n");
            break;

        case 'd':
            printf("\t\tDharam Veer\t\t\n");
            break;

        case 'e':
            printf("\t\tKiss Kiss Ko Pyar Karoon\t\t\n");
            break;

        case 'f':
            printf("\t\tGhulam\t\t\n");
            break;

        default:
            printf("Wrong input! Try again");
            break;
    }
}

void getInput(){
    char input;
    printf("Wrong input! Try again");
    printf("\nChoose correct game: ");
    scanf("%c", &input);
    getGame(input);
}