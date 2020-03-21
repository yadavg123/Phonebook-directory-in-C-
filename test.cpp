#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<fcntl.h>
using namespace std;
void typingDelay(){
    for(int ii = 0; ii<2000; ii ++)
    {
        for(int iii = 0; iii<2000; iii ++)
        { }
    }
}
void showMenu(){
    string str="Choose One of the following Options:*";
    cout<<"\n";
    int i=0;
    while(str[i]!='*'){
        cout<<str[i];
        typingDelay();
        i++;
    }
    cout<<endl<<endl;
    cout<<"Press 1 to Add a contact"<<endl;
    cout<<"Press 2 to view contact list"<<endl;
    cout<<"Press 3 to delete a contact"<<endl;
    cout<<"Press 4 to Delete all contacts"<<endl;
    cout<<"Press -1 to exit"<<endl<<endl;
}
void addDelay(){
    string str="Adding your contact to the list ...*";
    cout<<"\n";
    int i=0;
    while(str[i]!='*'){
        cout<<str[i];
        typingDelay();
        i++;
    }
    for(int ii = 0; ii<20000; ii ++)
    {
        for(int iii = 0; iii<20000; iii ++)
        { }
    }
}
void fetchDelay(){
    string str="Fetching all your contacts ...*";
    cout<<"\n";
    int i=0;
    while(str[i]!='*'){
        cout<<str[i];
        typingDelay();
        i++;
    }
    for(int ii = 0; ii<20000; ii ++)
    {
        for(int iii = 0; iii<20000; iii ++)
        { }
    }
}
void deleteDelay(){
    string str="Deleting all the contacts ...*";
    cout<<"\n";
    int i=0;
    while(str[i]!='*'){
        cout<<str[i];
        typingDelay();
        i++;
    }
    for(int ii = 0; ii<20000; ii ++)
    {
        for(int iii = 0; iii<20000; iii ++)
        { }
    }
}
void returnDelay(){
    string str="Returning to Main Menu ...*";
    cout<<"\n";
    int i=0;
    while(str[i]!='*'){
        cout<<str[i];
        typingDelay();
        i++;
    }
    for(int ii = 0; ii<20000; ii ++)
    {
        for(int iii = 0; iii<20000; iii ++)
        { }
    }
}
void exitDelay(){
    cout<<"\nExiting ...\n";
    for(int ii = 0; ii<20000; ii ++)
    {
        for(int iii = 0; iii<20000; iii ++)
        { }
    }
}

int main () {
    int x;
    string in="WELCOME TO YOUR PHONEBOOK DIRECTORY*";
    cout<<"\n";
    int i=0;
    while(in[i]!='*'){
        cout<<in[i];
        typingDelay();
        i++;
    }
    cout<<"\n"<<"-----------------------------------"<<endl<<endl;
    while(true){
        showMenu();
        in="ENTER YOUR CHOICE: *";
        int x=0;
        while(in[x]!='*'){
            cout<<in[x];
            typingDelay();
            x++;
        }
        cin>>x;
        switch(x){
            case -1:
            {
                char ch;
                cout<<"\nAre U sure U want to quit? (Y/N) ";
                cin>>ch;
                if(ch=='Y'||ch=='y'){
                    cout<<"Thank you for using me :) \n";
                    cout<<"EXITING...\n";
                    exit(0);
                }else if(ch=='N'||ch=='n'){
                    returnDelay();
                    break;
                }else{
                    cout<<"\nwrong choice\n";
                    returnDelay();
                    break;
                }
            }
            case 1:
            {
                string name;
                string number;
                cout<<"\n---- ADD A NEW CONTACT ----\n\n";
                cout<<"Enter the name: ";
                getline(cin.ignore(),name);
                cout<<"u entered, "<<name<<endl;
                cout<<"Enter the mobile number: ";
                cin>>number;
                ofstream fout;
                fout.open("contacts.txt",ios::app|ios::binary);
                fout<<name<<"|"<<number<<",";
                fout.close();
                addDelay();
                cout<<"\nDone! Your contact is added\n";
                int choice;
                cout<<"\nFor Main Menu, Press 1\nFor Exiting, Press 0\n";
                cout<<"Enter your choice: ";
                while(1){
                    cin>>choice;
                    if(choice==1){
                        returnDelay();
                        break;
                    }else if(choice==0){
                        exitDelay();
                        exit(0);
                    }else{
                        cout<<"\nWrong choice, Enter again: ";
                    }
                }
                break;
            }
            case 2:
            {
                fetchDelay();
                cout<<"\n\n*** YOUR CONTACTS LIST ***\n"<<endl;
                ifstream fin;
                fin.open("contacts.txt",ios::in|ios::binary);
                char ch=fin.get();
                while(!fin.eof()){
                    while(ch!=','){
                        if(ch=='|')
                            cout<<" "<<ch<<" ";
                        else
                            cout<<ch;
                        ch=fin.get();
                    }
                    cout<<"\n";
                    ch=fin.get();
                }
                fin.close();
                cout<<"\n*** Thus ends ur contacts list ***\n";
                int choice;
                cout<<"\nFor Main Menu, Press 1\nFor Exiting, Press 0\n";
                cout<<"Enter your choice: ";
                while(1){
                    cin>>choice;
                    if(choice==1){
                        returnDelay();
                        break;
                    }else if(choice==0){
                        exitDelay();
                        exit(0);
                    }else{
                        cout<<"\nWrong choice, Enter again: ";
                    }
                }
                break;
            }
            case 3:
            {
                string str="THIS FEATURE IS STILL UNDER DEVELOPMENT, SORRY FOR THE INCONVINIENCE CAUSED :( *";
                int i=0;
                cout<<endl;
                while(str[i]!='*'){
                    cout<<str[i];
                    typingDelay();
                    i++;
                }
                cout<<endl;
                int choice;
                cout<<"\nFor Main Menu, Press 1\nFor Exiting, Press 0\n";
                cout<<"Enter your choice: ";
                while(1){
                    cin>>choice;
                    if(choice==1){
                        returnDelay();
                        break;
                    }else if(choice==0){
                        exitDelay();
                        exit(0);
                    }else{
                        cout<<"\nWrong choice, Enter again: ";
                    }
                }
                break;
            }
            case 4:
            {
                cout<<"\nARE U SURE U WANT TO DELETE ALL THE CONTACTS?\n(Y/N)";
                string confirm;
                cin>>confirm;
                if(confirm[0]=='Y' || confirm[0]=='y'){
                    fstream fout;
                    fout.open("contacts.txt",ios::out);
                    fout<<"";
                    fout.close();
                }else if(confirm[0]=='N' || confirm[0]=='n'){
                    break;
                }else{
                    cout<<"Sorry, U entered something wrong :( \n";
                }
                deleteDelay();
                cout<<"\nDone! All the contacts got deleted\n";
                returnDelay();
                break;
            }
            default:
                cout<<"\nINVALID CHOICE! TRY AGAIN\n";
                returnDelay();
                break;
        }
    }
    return 0;
}
