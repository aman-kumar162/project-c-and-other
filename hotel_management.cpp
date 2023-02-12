#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    //Quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchiken=0;
   // food items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //Total  items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
     
     cout<<"\n\t Quantity of item we have"<<endl;
     cout<<" Rooms Available :";
     cin>>Qrooms;
     cout<<"\nQuantity of pasta :";
     cin>>Qpasta;
    cout<<"\nQuantity of burger :";
     cin>>Qburger;
     cout<<"\nQuantity of noodle :";
     cin>>Qnoodles;
      cout<<"\nQuantity of shake :";
     cin>>Qshake;
      cout<<"\nQuantity of chicken-roll :";
     cin>>Qchiken;
     m:
     cout<<"\n\n\n\t Please Select from menu options";
     cout<<"\n\n1)Rooms";
     cout<<"\n\n2)Pasta";
     cout<<"\n\n3)Burger";
     cout<<"\n\n4)Noodles";
     cout<<"\n\n5)shake";
     cout<<"\n\n6)chicken-roll";
     cout<<"\n\n7)Information regarding sales and collection";
     cout<<"\n8)Exit";

     cout<<"\n\n Please Enter your choice!";
     cin>>choice;
     switch (choice)
     {
     case 1:
        cout<<"\n\n Enter the number of rooms you want:";
        cin>>quant;
        if(Qrooms-Srooms>=quant){
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1200;
            cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";

        }
        else
          cout<<"\n\t Only "<<Qrooms-Srooms<<"are available in hotel";

        break;
    case 2:
        cout<<"\n\n Enter the pasta Quantity:";
        cin>>quant;
        if(Qpasta-Spasta>=quant){
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*250;
            cout<<"\n\n\t\t"<<quant<<"pasta is the order";

        }
        else
          cout<<"\n\t Only "<<Qpasta-Spasta<<"pasta  available in hotel";

        break;
    case 3:
        cout<<"\n\n Enter the burger Quantity:";
        cin>>quant;
        if(Qburger-Sburger>=quant){
            Sburger=Sburger+quant;
            Total_burger=Total_burger+quant*200;
            cout<<"\n\n\t\t"<<quant<<"burger is the order";

        }
        else
          cout<<"\n\t Only "<<Qburger-Sburger<<"burger  available in hotel";

        break; 
    case 4:
        cout<<"\n\n Enter the noodle Quantity:";
        cin>>quant;
        if(Qnoodles-Snoodles>=quant){
            Snoodles=Snoodles+quant;
            Total_noodles=Total_noodles+quant*150;
            cout<<"\n\n\t\t"<<quant<<"noodle is the order";

        }
        else
          cout<<"\n\t Only "<<Qpasta-Spasta<<"noodle are  available in hotel";

        break;     
    case 5:
        cout<<"\n\n Enter the shake Quantity:";
        cin>>quant;
        if(Qshake-Sshake>=quant){
            Sshake=Sshake+quant;
            Total_shake=Total_shake+quant*250;
            cout<<"\n\n\t\t"<<quant<<"shake is the order";

        }
        else
          cout<<"\n\t Only "<<Qshake-Sshake<<"shake available in hotel";

        break;     
    case 6:
        cout<<"\n\n Enter the chicken-roll Quantity:";
        cin>>quant;
        if(Qchiken-Schicken>=quant){
            Schicken=Schicken+quant;
            Total_chicken=Total_chicken+quant*250;
            cout<<"\n\n\t\t"<<quant<<"chicken roll is the order";

        }
        else
          cout<<"\n\t Only "<<Qchiken-Schicken<<" chicken - roll  available in hotel";

        break;   
    case 7:
         cout<<"Details of sales and collection";
         cout<<"\n\n Number of room we had:"<<Qrooms;
         cout<<"\n\n Number of rooms we gave for rent :"<<Srooms;
         cout<<"\n\n Remaining rooms"<<Qrooms-Srooms;
         cout<<"\n\n Total room collection for the Day :"<<Total_rooms;
       
         cout<<"\n\n Number of pasta we had:"<<Qpasta;
         cout<<"\n\n Number of pasta we sold :"<<Spasta;
         cout<<"\n\n Remaining pasta"<<Qpasta-Spasta;
         cout<<"\n\n Total pasta collection for the Day :"<<Total_pasta;
 
         cout<<"\n\n Number of burger we had:"<<Qburger;
         cout<<"\n\n Number of burger we sold :"<<Sburger;
         cout<<"\n\n Remaining burger"<<Qburger-Sburger;
         cout<<"\n\n Total burger collection for the Day :"<<Total_burger;

         cout<<"\n\n Number of shake we had:"<<Qshake;
         cout<<"\n\n Number of shake we sold :"<<Sshake;
         cout<<"\n\n Remaining shake"<<Qshake-Sshake;
         cout<<"\n\n Total shahke collection for the Day :"<<Total_shake;
       
         cout<<"\n\n Number of noodles we had:"<<Qnoodles;
         cout<<"\n\n Number of noodles we sold :"<<Snoodles;
         cout<<"\n\n Remaining noodles"<<Qnoodles-Snoodles;
         cout<<"\n\n Total noodles collection for the Day :"<<Total_noodles;
        
         cout<<"\n\n Number of chicken we had:"<<Qchiken;
         cout<<"\n\n Number of chicken we sold :"<<Qchiken;
         cout<<"\n\n Remaining chickent roll"<<Qchiken-Schicken;
         cout<<"\n\n Total Chicken-roll collection for the Day :"<<Total_chicken;

         cout<<"\n\n Total collection for the day :"<<Total_burger+Total_chicken+Total_noodles+Total_pasta+Total_rooms+Total_shake;
        break;
case 8:
   exit(0);

     
     default:
     cout<<"\n please select the number mentioned above !"<<endl;
        break;
     }
goto m;
     

     

}