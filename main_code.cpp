#include <iostream>
#include<ctime>
using namespace std ;

//making a randomizer function
int random(int no){
    srand(time(0));
    int a = rand() % no  + 1;
    return a ;
}

// Player prefrence input
int main(){
    cout<<"This is a no guessing game which mode do you want to play ??: \n";
    cout<<"Kiddo mode : no betwwen 1 to 10 (3 lives ) or just type K"<<endl;
    cout<<"Normal mode : no betwwen 1 to 100 ( 4 lives ) or just type N"<<endl;
    cout<<"Hard Mode  : no betwwen 1 to 1000  (8 lives ) or just type H"<<endl;
    string gmode ;
    getline(cin,gmode);


    //hard mode block
    if (gmode =="H" or gmode == "h"){
        int lives = 8;
        int guess;
        cout<<"************************* Welcome to Hard Mode************************************* \n";
        //setting a random function
        int main_no = random(1000);
        cout<<"Enter Your Guess ";
        // core logic for life count and hints regrading number 
        while (lives >0){
            cin>>guess;
            //guess is greater than actual no 
            if (guess > main_no){
                lives = lives - 1;
                //defeat when all lives over 
                if (lives == 0) break;
                else cout<<"try  low ";  
            }
            //guess is gless than actual no 
            else if (guess < main_no){
                lives = lives - 1;
                //defeat when all lives over 
                if (lives == 0) break;
                else cout<<"try high ";
            }
            else {
                //victory
                cout<<"You Won !!!,Noice";
                return 0;
            }
            //defeat when all lives over 
            
        }
        cout<<"The Number Was : "<<main_no<<endl;
        cout<<"You are Defeated You May Try Again";
        }




        // kiddo mode block 



    else if (gmode =="K" or gmode == "k"){
        int lives = 3;
        int guess;
        cout<<"************************* Welcome to Kiddo Mode************************************* \n";
        int main_no = random(10);
        cout<<"Enter Your Guess ";
        while (lives >0){
            cin>>guess;
            if (guess > main_no){
                lives = lives - 1;
                if (lives == 0) break;
                else cout<<"try  low ";  
            }
            else if (guess < main_no){
                lives = lives - 1;
                if (lives == 0) break;
                else cout<<"try high ";
            }
            else {
                cout<<"You Won !!!, but this was the easiest mode <3  ";
                return 0;
            }
        }
        cout<<"The Number Was : "<<main_no<<endl;
        cout<<"You are Defeated You May Try Again";
        }




        // normal mode block 




    else if (gmode =="N" or gmode == "n"){
        int lives = 4;
        int guess;
        cout<<"************************* Welcome to Medium/Normal Mode************************************* \n";
        int main_no = random(100);
        cout<<"Enter Your Guess ";
        while (lives >0){
            cin>>guess;
            if (guess > main_no){
                lives = lives - 1;
                if (lives == 0) break;
                else cout<<"try  low ";  
            }
            else if (guess < main_no){
                lives = lives - 1;
                if (lives == 0) break;
                else cout<<"try high ";
            }
            else {
                cout<<"You Won !!!  ";
                return 0; 
            }
        }
        cout<<"The Number Was : "<<main_no<<endl;
        cout<<"You are Defeated You May Try Again";
        }
        else cout<<"Type something valid (n,k,h) dont waste our time ";
    }
