#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    map <int, string> students;
    students[1]="Гончаренко";
    students[2]="Мельник";
    students[3]="Шевченко";
    students[4]="Ковальчук";
    students[2]="Мельник";
    students[5]="Коваленко";
    students[6]="Пономаренко";
    map <int, string> :: iterator it = students.begin();
    map <int, string> :: iterator it2 = students.begin();

for (int i = 0; it != students.end(); it++, i++) {  
        cout << "Ключ " << it->first << ", значение " << it->second << endl;
    }
cout << "Size: " << students.size() << endl;





    
    cout<< endl;
for (int i = 0; it != students.end(); it++, i++) {  
        cout << "Ключ " << it->first << ", значение " << it->second << endl;
    }





}