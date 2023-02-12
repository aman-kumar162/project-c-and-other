#include<bits/stdc++.h>
using namespace std;
 void fun(){
  fstream my_file;
	my_file.open("file.txt", ios::in);
	if (!my_file) {
		cout << "No such file";
	}
	else {
		char ch;

		while (1) {
			my_file >> ch;
			if (my_file.eof())
				break;

			cout << ch;
		}

	}
	my_file.close();
 }
int main(){
    int a,i=0;
    string text,old,password1,password2,pass,name,password0,age,user,word,word1;
    string creds[2],cp[2];
    cout<<endl;
    cout<<"     Security System     "<<endl;
    cout<<" _________________________"<<endl;
    cout<<"|       1.Register       | "<<endl;
    cout<<"|       2.Login          |"<<endl;
    cout<<"|       3.Change passwd  | "<<endl;
    cout<<"|       4.End Program    | "<<endl;
    cout<<"|________________________|"<<endl;

    do{
        cout<<endl<<endl;
        cout<<"Enter your choice :-";
        cin>>a;
        switch(a){
          case 1:{
            cout<<"__________________________"<<endl<<endl;
            cout<<"|---------Register--------|"<<endl;
            cout<<"|_________________________|"<<endl;
            cout<<"please enter your user name:-";
            cin>>name;
            cout<<"please enter the password :-";
            cin>>password0;
            cout<<"please enter your age:-";
            cin>>age;

            ofstream of1;
            of1.open("file.txt");
             if(of1.is_open()){
                of1<<name<<"\n";
                of1<<password0<<"\n";
               
                cout<<"Registration sucessfull"<<endl;
            } 
             fun();
            break;

          }
          case 2: {
               i=0;
                cout<<"________________________"<<endl<<endl;
               cout<<"|----------Login---------|"<<endl;
               cout<<"|________________________|"<<endl<<endl;
            
            ifstream of2;
            of2.open("file.txt");
            cout<<"please enter your username:-";
            cin>>user;
            cout<<"please enter your password:- ";
            cin>>pass;
            if(of2.is_open()){
                while (!of2.eof())
                {  while(getline(of2,text)){
                  istringstream iss(text);
                  iss>>word;
                  creds[i]=word;
                  i++;
                }
                   if(user==creds[0] && pass==creds[1]){
                    cout<<"---Login successfull---";
                    cout<<endl<<endl;

                    cout<<"Details: "<<endl;
                    cout<<"UserName:-"+ name<<endl;
                    cout<<"password:-"+ pass<<endl;
                    cout<<"Age: "+age<<endl;

                   }
                   else{
                    cout<<endl<<endl;
                    cout<<"Incorrect Credentials"<<endl;
                    cout<<"|   1.press 2 to login          |"<<endl;
                    cout<<"|   2.Press 3 to chage password |"<<endl;
                    break;
                   }
                }
                
            }
            fun();
            break;
          }
          case 3: {
               i=0;
               cout<<"-----------Change password---------";
               ifstream of0;
               of0.open("file.txt");
               cout<<"enter the old password :-";
               cin>>old;
               if(of0.is_open()){
                while (of0.eof()){
                  while (getline(of0,text)){
                    istringstream iss(text);
                    iss>>word1;
                    cp[i]=word1;
                    i++;
                  }
                  if(old==cp[1]){
                    of0.close();
                    ofstream of1;
                    if(of1.is_open()){
                      cout<<"enter your new password:-";
                      cin>>password1;
                      cout<<"enter your password again:-";
                      cin>>password2;
                      if(password1==password2){
                        of1<<cp[0]<<"\n";
                        of1<<password1;
                        cout<<"password changed sucessfully"<<endl;

                      }
                      else{
                        of1<<cp[0]<<"\n";
                        of1<<old;
                        cout<<"Password do not match"<<endl;
                      }
                    }
                  }
                  else{
                  cout<<"please enter a valid password"<<endl;
                  break;}
                }
               }
             break; 
          }
          case 4: {
            cout<<"----------Thank YOU !---------";
            break;        
         }
          default: 
           cout<<"Enter a valid case";
    }

}
while (a!=4);
fun();
return 0;}

