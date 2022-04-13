#include <iostream>
#include <vector>
#include <string>

//g++ -std=c++11 prog4.cpp -o prog4

using namespace std;

class navchzaklad {
    protected:
    int m_students;

    public:
    int teachers;
    int groups;
    int year;

    navchzaklad(int students)
    : m_students(students)
    {
    }

    virtual int getStudents(){
        return m_students;
    }

    virtual int kolvo_teachers() = 0;
};

class school : public navchzaklad {
    public:

    school(int students) 
    : navchzaklad(students){
    }
   

    int kolvo_teachers() override {
        return 56;
    }

    int kolvo_class(){
        return 18;
    }
    

};

class uni : public navchzaklad {
    public:
    uni(int students) 
    : navchzaklad(students){
    }
   

    int kolvo_teachers() override {
        return 3075;

    }
    

};

class faculty  {
    public:
    string name;
    string year;
    faculty(string n, string y) {
        name=n;
        year=y;
    }
   
    

};


int main(){
   
school dk(563);
cout<<"Кількість учнів у ліцеї: " << dk.getStudents() << endl;
uni kpi(25000);
cout <<"Кілікість викладачів у ліцеї: " << dk.kolvo_teachers()<< endl;
cout <<"Кількість класів у ліцеї: " << dk.kolvo_class() << endl;
cout<<"Кількість студентів в університеті: " << kpi.getStudents()<< endl;
cout <<"Кількість викладачів в університеті: " << kpi.kolvo_teachers() << endl;


faculty fkpi[25] = {
    faculty("ІПСА", "1997"),
    faculty("ІТС", "2002"),
    faculty("ВПІ", "1989"),
    faculty("ІАТ", "Невідомо"),
    faculty("ІЕЕ", "1946"),
    faculty("ІМС", "2020"),
    faculty("ІССЗІ", "Невідомо"),
    faculty("ММІ", "1898"),
    faculty("ФТІ", "1995"),
    faculty("ІХВ", "1938"),
    faculty("ПСФ", "1962"),
    faculty("РТФ", "1921"),
    faculty("ТЕФ", "1931"),
    faculty("ФБМІ", "2002"),
    faculty("ФБТ", "2001"),
    faculty("ФЕА", "1918"),
    faculty("ФЕЛ", "1962"),
    faculty("ФІОТ", "1985"),
    faculty("ФЛ", "1995"),
    faculty("ФММ", "1992"),
    faculty("ФСП", "1996"),
    faculty("ФПМ", "1990"),
    faculty("ФМФ", "1996"),
    faculty("ХТФ", "1898"),
    faculty("СУНФ", "2016")
};

cout << "Список факультетів університета: ";
for(int i=0; i<25; i++){
    cout << fkpi[i].name << " ,";
}

cout << "\n Взагалом в університеті налічується 25 факультетів та інститутів";
cout << "\n Введіть назву факультету, щоб дізнатися рік заснування: ";
string f;
cin >> f;
for(int i=0; i<25; i++){
    if(f==fkpi[i].name){
        cout << "Рік заснування факультету: " << fkpi[i].year;
    }
    
}
}