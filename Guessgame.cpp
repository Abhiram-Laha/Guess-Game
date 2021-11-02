/* Luck Game */
#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int user;  //intake from user
    int num;  //storing random number

    cout<<"----LUCK GAME----\n\n";
    cout<<"ENTER A NUMBER (1-10) : ";
    cin>>user;

    srand(time(0));
    for (int i=1; i<=5; i++){
        num=(rand()%10+1);
    }
    //cout<<num;
    if (num==user){
        cout<<"\n Can't believe you are so 'LUCKY'"<<endl;
        cout<<"------YOU WON THE LOTTERY-------";
    }
    else{
        cout<<"\n-----TRY NEXT TIME-----";
    }
    return 0;
}