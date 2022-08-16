#include <iostream>

int add(int num1, int num2);
int subtract(int num1, int num2);
int divide(int num1, int num2);
int multiply(int num1, int num2);

int main(){
    int choice, FirstNumber, SecondNumber;
    std::cout<<"Hello there, what operation would you like to perform?\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n";
    std::cin >> choice;
    std::cout << "Enter Your First Number: ";
    std::cin >> FirstNumber;
    std::cout << "Enter Your Second Number: ";
    std::cin >> SecondNumber;
    switch(choice){
        case 1:
            add(FirstNumber, SecondNumber);
            break;
        case 2:
            subtract(FirstNumber, SecondNumber);
            break;
        case 3:
            if(!(SecondNumber == 0)){
                divide(FirstNumber, SecondNumber);
            }
            else{
                std::cout << "You cannot divide by zero\n";
            }
            break;
        case 4:
            multiply(FirstNumber, SecondNumber);
            break;
        default:
            std::cout << "That's not part of the options\n";
    }
    return 0;
}

int add(int num1, int num2){
    return (num1+num2);
}

int subtract(int num1, int num2){
    return (num1-num2);
}

int divide(int num1, int num2){
    return (num1/num2);
}

int multiply(int num1, int num2){
    return (num1*num2);
}
