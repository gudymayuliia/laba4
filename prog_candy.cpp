#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <curses.h>

using namespace std;

class candy{
    public:

    string name;
    double sugar;
    int weight;
    string flavour;
    bool nuts;
    

    candy(string n, double s, int w, string f, bool nu){
        name=n;
        sugar = s;
        weight = w;
        flavour = f;
        nuts = nu;

    }
};


int main(){
    int sum=0;
  
    candy nabir[9]= {
     candy("barni", 58, 30, "choolate", false),
     candy("bilochka", 51, 11, "chocolate with nuts", false),
     candy("lishchyna", 56, 17, "chocolate with nuts", true),
     candy("korivka", 80, 14, "creamy", false),
     candy("iryska", 90 , 5, "caramel", false),
     candy("barbaryska", 96, 5, "sugary", false),
     candy("romashka", 68, 15, "chocolate", false),
     candy("karakym", 58, 12, "chocolate", false),
     candy("kontik", 62, 26, "chocolate with nuts", true)
     };

    for(int i=0; i<9; i++){
    cout<< nabir[i].name << ", ";
    }


for(int i=0; i<9; i++){
    sum+= nabir[i].weight;
}

cout << "\n Вага набору: " << sum;

cout << "\nЦукерки з горiхами: \n";

for(int i=0; i<9; i++){
    if(nabir[i].nuts==true){
        cout << nabir[i].name << " ,";
    }

}
int a, b;
cout << "\n Введіть ліву границю діапазону: ";
cin >> a;
cout << "\n Введіть праву границю діапазону: ";
cin >> b;
cout << "Цукерки з відповідним змістом цукру: ";
for(int i=0; i<9; i++){
    if(nabir[i].sugar >= a && nabir[i].sugar <= b){
        cout << nabir[i].name << " ,";
    }
}
}