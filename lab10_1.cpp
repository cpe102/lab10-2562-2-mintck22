#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    int x = 1;
    do {
        cin.get();
        srand(time(0));
        x++;
    }while (x < 4);
    
    


    int i = rand()%9;
    cout << "You will get "<< grade[i] <<" in this 261102.";


}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
