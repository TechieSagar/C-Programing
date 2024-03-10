// 1st Project - Casino Game in C programming

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_BET 100

// Define a struct to store user information
struct User {
    char username[20];
    char password[20];
    int betValue;
};

struct User existingUser,currentUser;

// Methods prototype
int getInput(char);
void getGame(int);
void userFuction();
void userFuncionLogin();
void userFunctionAddUser();
void gameMenu();
int getSystemResult();
void getFinalResult();

// Main Function
int main(){

    

    userFuction();
    
    return 0;
}

void getGame(int input){
    int result;
    switch(input){
        case 1:
            printf("Don");
            break;

        case 2:
            printf("Amar Akbar Anthony");
            break;

        case 3:
            printf("Sahib Biwi or Ghulam");
            break;

        case 4:
            printf("Dharam Veer");
            break;

        case 5:
            printf("Kiss Kiss Ko Pyar Karoon");
            break;

        case 6:
            printf("Ghulam");
            break;

        default:
            printf("Wrong input! Try again");
            break;
    }
}

int getSystemResult(){
    int result;
    result = (rand()%6)+1;
    return result;
}


void userFuction(){
    int number;
    while(1){
        printf("\t\tWelcom to Casino Game\t\t");
        printf("\n");
        printf("---------------------------------------------------------\n");
        printf("|\t\t\t\t\t\t\t|\n");
        printf("|\t1. Login \t\t\t\t\t|\n");
        printf("|\t2. New User \t\t\t\t\t|\n");
        printf("|\t3. Exit \t\t\t\t\t|\n");
        printf("|\t\t\t\t\t\t\t|");
        printf("\n---------------------------------------------------------\n");
        printf("\n");

        printf("Enter your choice: ");
        scanf("%d", &number);

        if(number==1){
            userFuncionLogin();
            break;
        } else if(number==2){
            userFunctionAddUser();
        } else {
            exit(1);
        }
    }
    
}

void userFuncionLogin(){
    char ch;
    int i;
    //struct User existingUser,currentUser;

    FILE* fUserData;
    FILE* fbetData;

    fUserData = fopen("userData.txt","r");
    fbetData = fopen("betValueData.txt", "r");

    if (fUserData == NULL) {
        printf("Could not open file %s\n", "userData.txt");
        exit(1);
    }

    fscanf(fUserData, "%s%s", existingUser.username, existingUser.password);
    fscanf(fbetData, "%d", &existingUser.betValue);
    fclose(fUserData);
    fclose(fbetData);

    // printf("%s",existingUser.username);
    // printf("\n%s",existingUser.password);
    // printf("\n%d", existingUser.betValue);

    printf("\nEnter your username: ");
    scanf("%s", currentUser.username);

    printf("Enter your password: ");

    // password hide with asteriks (*)
    do {
        ch = getch();
        currentUser.password[i] = ch;
        printf("*");
        i++;
    } while(ch != '\r');

    currentUser.password[i-1] = '\0';

    // printf("\n%s",currentUser.password);
    // printf( "\n%s",currentUser.username );

    if(strcmp(existingUser.username,currentUser.username)==0 && strcmp(existingUser.password,currentUser.password)==0 ) {
            printf("\n\nHi %s\n",existingUser.username);
            gameMenu();
    } else {
        printf("\nInvalid  Username or Password.\nPlease try again.");
        userFuncionLogin();
    }

}  

// Function to Add a user
void userFunctionAddUser() {
    
    struct User newUser;

    printf("Enter a username: ");
    scanf("%s", newUser.username);

    printf("Enter a password: ");
    scanf("%s", newUser.password);

    // Add the new user to the file
    FILE* fp;
    fp = fopen("userData.txt","w");

    if (fp == NULL) {
        printf("Could not open file %s\n", "userData.txt");
        exit(1);
    }

    fprintf(fp, "%s\n%s", newUser.username, newUser.password);
    fclose(fp);

    printf("\nUser added successfully.\n\n");
}

void gameMenu(){
    printf("\t\tWelcom to Casino Game\t\t");
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t|\n");
    printf("|\t1. Don \t\t\t\t\t\t|\n");
    printf("|\t2. Amar Akbar Anthony \t\t\t\t|\n");
    printf("|\t3. Sahib Biwi or Ghulam \t\t\t|\n");
    printf("|\t4. Dharam Veer \t\t\t\t\t|\n");
    printf("|\t5. Kiss Kiss Ko Pyar Karoon \t\t\t|\n");
    printf("|\t6. Ghulam \t\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t\t|");
    printf("\n---------------------------------------------------------\n");
    printf("\n\n");

    getFinalResult();

}

void getFinalResult(){
    int input;
    int result,userInput,getUserResult,getComputerResult;
    char again;
    do
    {
        
    printf("Your Balance : %d\n\n", existingUser.betValue);
    printf("Place bet on games with Rs. [10-100] : ");
    scanf("%d", &currentUser.betValue);

    while(currentUser.betValue < 10 || currentUser.betValue > 100){
        printf("Invalid input! Please enter between 10 and 100.");
        printf("\nPlease try again:\n");
        scanf("%d", &currentUser.betValue);
    }

    printf("Enter your bet (1-6): ");
    scanf("%d",&input);
    getUserResult = input;
    getComputerResult = getSystemResult();

    if(getUserResult!=getComputerResult){
        printf("\nYou Loose\n\n");
        existingUser.betValue = existingUser.betValue-currentUser.betValue;
        FILE* fp;
        fp = fopen("betValueData.txt","w");

        fprintf(fp, "%d", existingUser.betValue);
        fclose(fp);
    } else{
        printf("\nYou Won\n\n");
        existingUser.betValue = existingUser.betValue+currentUser.betValue;
        FILE* fp;
        fp = fopen("betValueData.txt","w");

        fprintf(fp, "%d", existingUser.betValue);
        fclose(fp);
    }

    printf("Your Choice: ");
    getGame(input);
    printf("\nComputer Choice: ");
    getGame(getComputerResult); 

    printf("\nYour Balance : %d\n\n", existingUser.betValue);

    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &again);

    } while(again == 'y');

    
}



