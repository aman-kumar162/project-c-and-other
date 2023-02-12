#include<iostream>
#include<string>
#include<fstream>
//#include<bits/stdc++.h>
using namespace std;

void login();
void regstration();
void forget();
int main()
{
    int c;
    cout<<"\t\t\t_________________________________________________________\n\n\n";
    cout<<"                      Welcome to login page                    \n\n\n";
    cout<<" ________________________   MENU         _______________________\n\n\n";
    cout<<"                                                                   \n\n";
    cout<<"\t | Press 1 to LOGIN                    |"<<endl;
    cout<<"\t | Press 2 to REGISTER                 |"<<endl;
    cout<<"\t | Press 3 if you forget your PASSWORD |"<<endl;
    cout<<"\t | Press 4 to EXIT                     |"<<endl;
    cout<<"\n\t\t\t Please enter your Choice : ";
    cin>>c;
    cout<<endl;
    switch(c){
        case 1:  
           { login();
           break;}
        case 2:
            {regstration();
            break;}
        case 3:
            { forget();
             break;}
        case 4:
             {cout<<"\t\t\t\t ThankYou!   \n\n";
             break;
             }
        default:
         //system("cls");
          { cout<<"\t\t\t Please select from the option given above \n"<<endl;            
           main();
           break;}

    }
    return 0;
}
 void login(){
    int count;
    string userId,password,id,pass;
   // system("cls");
    cout<<" \t\t\t Please enter your username and Password : "<<endl;
    cout<<" \t\t\t USERNAME : ";
    cin>>userId;
    cout<<"\t\t\t PASSWORD :";
    cin>>password;
    
    ifstream input("record.txt");

    while (input>>id>>pass)
    {
        if(id==userId && pass==password){
            count=1;
           system("cls");

        }
        input.close();
        if(count==1){
            cout<<userId<<"\n your login is  succesfull \n Thanks for login ! \n";
            main();

        }
        else{
           cout<<"\n LOGIN ERROR \n Please check your username and password \n";
           main();
           }
    }
    
 }

 void regstration(){
    string ruserid,rpassword,rid,rpass;
   // system("cls");
    cout<<"\t\t\t Enter the username : ";
    cin>>ruserid;
    cout<<"\t\t\t Enter the password : ";
    cin>>rpassword;

    ofstream f1("record.txt",ios::app);
    f1<<ruserid<<' '<<rpassword<<endl;
   //system("cls");
    cout<<"\n\t\t\t Registration is successfull !\n";
    main();
 }

 void forget(){
    int option;
    //system("cls");
    cout<<"\t\t\t You forget your password , No worries\n";
    cout<<"press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;
    cout<<"\t\t\t Enter your choice :";
    cin>> option;
    switch (option)
    {
    case 1:
        {
             int count=0;
             string suserid,sid,spass;
             cout<<"\n\t\t Enter the username which you remembered :";
             cin>>suserid;

             ifstream f2("record.txt");
             while(f2>>sid>>spass){
                if(sid== suserid){
                    count=1;
                }
             }
             f2.close();
             if(count==1){
                cout<<"\n\n Your account is found !\n";
                cout<<"\n\n Your password is : "<<spass;
                main();
             }
        break;
        }
    case 2:{
         main();
       break;
    }    
    default:
        cout<<"\t\t wrong choice ! Please Try Again "<<endl;
        forget();
          break; 
    }
 }
