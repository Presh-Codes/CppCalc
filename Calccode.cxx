#include <iostream>

int main()
{
    int a, b, c, d;
    std::cout<<"Hello there, what operation would you like to perform?\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n";
    std::cin>>a;
    switch(a){
        case 1:
            std::cout<<"Type in a number";
            std::cin>>b;
            std::cout<<"Type in another number";
            std::cin>>c;
            std::cout<<"Your sum is "<< b+c;
            break;
        case 2:
            std::cout<<"Type in a number";
            std::cin>>b;
            std::cout<<"Type in another number";
            std::cin>>c;
            std::cout<<"Your answer is "<< b-c;
            break;
        case 3:
            std::cout<<"Type in a number";
            std::cin>>b;
            std::cout<<"Type in another number";
            std::cin>>c;
            std::cout<<"Your answer is "<< b/c;
            break;
        case 4:
            std::cout<<"Type in a number";
            std::cin>>b;
            std::cout<<"Type in another number";
            std::cin>>c;
            std::cout<<"Your answer is "<< b*c;
            break;
        default:
            std::cout<<"That's not part of the options!";
        
    }
}