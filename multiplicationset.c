#include <stdio.h>

void multi();
void summa();

int main(){
    int choice;
    printf("1. Multiplication Table\n");
    printf("2. Summation of Number\n");
    printf("3. Exit\n");
    printf(" : ");
    scanf("%d", &choice);
    if(choice == 1){
    	system("cls");
        multi();
        }
        else if (choice == 2){
        	system("cls");
            summa();
            }
            else if (choice == 3){
            	system("cls");
                printf("Thank you for using the program.....");
                    }
                    else{
                        system("cls");
                        main();
                        }
}

void multi(){
    int num = 1, total;
    printf("Enter the number : ");
    scanf("%d", &num);
    system("cls");
    for (int w = 1; w <= 10; w++){
        for (int x = 1; x <= num; x++){
            total = w * x;
            printf("%d\t", total);
        }
    printf("\n");
    }
    main();
}

void summa(){
    int num = 0, total = 0, totalnum;
    printf("Enter the number : ");
    scanf("%d", &num);
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total + num;
        if (num != x){
            printf("%d + ", num);
        }
        else{
            printf("%d = %d\n", num, total);
            main();
        }
    }
}