gf#include <iostream>

using namespace std;

int main()
{
    char chooseChoice;

    do {
            int choice, num1, num2;

    cout << "Menu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice:";
    choice = getMenuChoice();

    cout << " Enter two entegers:";
    cin >>num1>>num2;

    performOperation(choice, num1, num2,);

    cout << "Do you wish to continue?(Press yes or other key to cancel):";
    cin >> chooseChoice;
    } while (continueChoice == 'yes' || continueChoice == 'yes');

    return 0;
}
int getMenuChoice(){
    int choice;
while(true){
        cin >>choice;
if(choice >= 1 && choice <= 4)
    break;
else
    cout<<"incorrect. Please enter a valid option(1 - 4):";
}
return choice;

}

void performOperation(int choice, int num1, int num2){
    switch(choice){

    case 1:
        cout << "Results of addition:" << num1 + num2 <<endl;
        break;

    case 2:
        cout <<"Result of subtraction:" << num1 - num2 <<endl;
        break;

    case 3:
        cout << "Result of multiplication:" << num1 * num2 <<endl;
        break;

    case 4:
        if(num2 !=0)
            cout <<"Result of division:" << static_cast<double>(num1) / num2 <<endl;

        else
            cout<<"The second integer is zero, divide by zero.\n";
        break;

    default:
        cout<<"Invalid Choice.\n";
    }
}
