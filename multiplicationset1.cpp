#include <iostream>
using namespace std;

void multi();
void summa();

int main(){
    int choice;
    cout << "1. Multiplication Table\n";
    cout << "2. Summation of Number\n";
    cout << "3. Exit\n";
    cout << " : ";
    cin >> choice;
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
                cout << "Thank you for using the program.....";
                    }
                    else{
                        system("cls");
                        main();
                        }
}

void multi(){
    int num = 1, total;
    cout << "Enter the number : ";
    cin >> num;
    system("cls");
    for (int w = 1; w <= 10; w++){
        for (int x = 1; x <= num; x++){
            total = w * x;
            cout << total <<"\t";
        }
    cout << "\n";
    }
    main();
}

void summa(){
    int num = 0, total = 0, totalnum;
    cout << "Enter the number : ";
    cin >> num;
    system("cls");
    for (int x = 1; x <= num; num--){
        total = total + num;
        if (num != x){
            cout << num << " + ";
        }
        else{
           cout << num << " = " << total << "\n";
            main();
        }
    }
}