#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <curses.h>

//g++ -std=c++11 prog3.cpp -o prog3  
using namespace std;


//заменять колеса w
class wheel{
    public:
    void replace_wheels(){
        cout << "Ви тільки що замінили колеса!\n";
        
    }


};

//увеличивать скорость + наследуют колеса
class pedals : public wheel{
    public:
    void speed_up(){
        cout << "Швидкість збільшена!\n";
    }


};

//поворачивать руль l r
class handlebar : public pedals {
    public:
    void turning(char in){
        if(in=='l'){
            cout << "Ви повернули вліво!\n";
        }
        else{
            cout << "Ви повернули вправо!\n";
        }
    }

};




//красить p
class frame : public handlebar {
    public:
    void painting_frame(string colour) 
    {
        cin >> colour;
        cout << "Велосіпед пофарбован у " << colour << " колір!\n";
        

    }

};




//ехать педали и колеса s наследует все
class bicycle : public frame { 
    public:
    void riding(){
        cout << "Ви почали їхати!\n";
    }


};


int main(){
    bicycle b;
    char input;
    string clr;
    string colour;
    while(input!='q'){
    cout << "Введіть 'w', якщо бажаєте замінити колеса, 'p', щоб пофарбувати раму, l або r щоб керувати, '+' для збільшення швидкості, 's', щоб їхати та 'q' щоб вийти: ";
    cin >> input;

    switch(input){
        case 'w':
        b.replace_wheels();
        break;

        case 'p':
        cout << "Введіть бажаний колір: ";
        b.painting_frame(clr);
        break;

        case 'l':
        b.turning(input);
        break;

        case 'r':
        b.turning(input);
        break;

        case '+':
        b.speed_up();
        break;
        
        case 's':
        b.riding();
        break;


    
    }
    }





    
}