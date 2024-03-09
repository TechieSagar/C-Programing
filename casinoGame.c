// 1st Project - Casino Game in C programming

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


struct UserData{
    char name[50];
    int balance;
}users;

int getInput(char);
void getGame(int);
void userFuction(int);

int main(){

    char input;
    int number;
    int result,userInput,getUserResult,getComputerResult;
    FILE *fp;
    srand(time(NULL));
    char fileContent[500];

    printf("\t\tWelcom to Casino Game\t\t");
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t|\n");
    printf("|\t1. Login \t\t\t\t\t|\n");
    printf("|\t2. New User \t\t\t\t\t|\n");
    printf("|\t3. Exit \t\t\t\t\t|\n");
    //printf("|\t4. Dharam Veer \t\t\t\t\t|\n");
    //printf("|\t5. Kiss Kiss Ko Pyar Karoon \t\t\t|\n");
    //printf("|\t6. Ghulam \t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t|");
    printf("\n---------------------------------------------------------\n");
    printf("\n\n");

    scanf("%d", &number);

    userFuction(number);


    /*
    printf("\t\tWelcom to Casino Game\t\t");
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t|\n");
    printf("|\t1. Don \t\t\t\t\t\t|\n");
    printf("|\t2. Amar Akbar Anthony \t\t\t\t|\n");
    printf("|\t3. Sahib Biwi or Ghulam \t\t\t\t|\n");
    printf("|\t4. Dharam Veer \t\t\t\t\t|\n");
    printf("|\t5. Kiss Kiss Ko Pyar Karoon \t\t\t|\n");
    printf("|\t6. Ghulam \t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t|");
    printf("\n---------------------------------------------------------\n");
    printf("\n\n");
    */

    

    /*printf("Choose Any one from A-F : "); // user needs to choose alphabet like a b c etc.. from a-f
    scanf("%c", &input);
    input = tolower(input);
    userInput=getInput(input); */
    //printf("%d",userInput);

    
    /*getUserResult = getInput(input);
    getComputerResult = getSystemResult();

    if(getUserResult!=getComputerResult){
        printf("\nYou Loose\n\n");
    } else{
        printf("\nYou Won\n\n");
    }

    printf("Your Choice: ");
    getGame(userInput);
    printf("Computer Choice: ");
    getGame(getComputerResult); */

    //fclose (fp);
    return 0;
}

void getGame(int input){
    int result;
    switch(input){
        case 1:
            printf("\t\tDon\t\t\n");
            //getA();
            break;

        case 2:
            printf("\t\tAmar Akbar Anthony\t\t\n");
            break;

        case 3:
            printf("\t\tSahib Biwi or Ghulam\t\t\n");
            break;

        case 4:
            printf("\t\tDharam Veer\t\t\n");
            break;

        case 5:
            printf("\t\tKiss Kiss Ko Pyar Karoon\t\t\n");
            break;

        case 6:
            printf("\t\tGhulam\t\t\n");
            break;

        default:
            //printf("Wrong input! Try again");
            break;
    }
}

void getA(){
    printf("\tA-Don\n");
    printf("\nGame Rules\nColors will be: Red and Black\nand only Card - A will be there\nYou need to bet on Color or outcomes of A:");
}

int getSystemResult(){
    int result;
    result = (rand()%6)+1;
    return result;
}

int getInput(char n){
    int input;
    if(n=='a'){
        input = 1;
    } else if(n=='b'){
        input =2;
    } else if(n=='c'){
        input = 3;
    } else if(n=='d'){
        input = 4;
    } else if(n=='e'){
        input=5;
    } else if(n=='f'){
        input = 6;
    } else{
        printf("wrong input! Try again");
    }

    return input;
}

void userFuction(int number){
    if(number==1){

    } else if(number==2){

    } else {
        exit(1);
    }
}

