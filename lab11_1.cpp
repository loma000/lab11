// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include<ctime>
#include <iostream>
using namespace std;
#include <string>
#include<cstdlib>
int main(){
int i=0;
string grade[] ={"A", "B+", "B", "C+", "C", "D+", "D", "F","W"};
string null;
cout<< "Press Enter 3 times to reveal your future."<<endl;
 while ( true)
 { if(i==3)break;
    if(cin.get() == '\n') {
           i++;
        }
 }
  srand(time(0));
i=  rand()%8;
cout<<"You will get "<<grade[i]<< " in this 261102. " ;
 




    return 0;
}