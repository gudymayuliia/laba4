#include <iostream>
#include <vector>
#include <string>
using namespace std;



class parking {
    public:
    
void entering(vector<int> m){
    cout<< "Parking lots\n";
    for(int it=0; it<m.size(); it++){
    if(m[it]==0){
    m[it]=2;
    break;
}
}

for(int l=0; l<m.size(); l++){
    cout<< m[l] << " ";
    cout<< endl;
}
}

void leaving(vector<int> v){
    for(int i=0; i<v.size(); i++){
        if(v[i]==2){
            v[i]=0;
        }
    }
    for(int l=0; l<v.size(); l++){
    cout<< v[l] << " ";
    cout<< endl;
}
}


};


int main(){
    
    cout<< "enter number: ";
    int num;
    cin >> num;
    vector<int> lots;

    srand((int)time(0));
    cout <<"\n";

    for (int i = 0; i<num ; i++)
    {
      lots.push_back(rand()%2 - 0);      
      cout <<lots.at(i)<<" " << "\n";          
    }
    cout<<endl;   

    parking space;
    
    space.entering(lots);

    cout<< "Введiть -q- якщо хочете виїхати: ";
    char input;
    cin>> input;
    if(input=='q'){
        space.leaving(lots);
    }



}
