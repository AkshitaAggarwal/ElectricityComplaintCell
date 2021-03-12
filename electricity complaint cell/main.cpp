#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;
class complaintcell
{
private:
unsigned int choice;
char option;
public:
     complaintcell()
    {
        string name,add,pno,mno;
        do
        {cout<<endl;
            cout<<"Enter your name";
        getline(cin,name);
         cout<<"Enter your address";
         getline(cin,add);
         cout<<"Enter your phone number";
         getline(cin,pno);
         cout<<"Enter your meter number";
         getline(cin,mno);}
         while(name==""||add==""||pno==""||mno=="");
         ofstream myfile("customerdetail.txt",ios::app);
         cout<<endl;
         myfile<<name<<endl;
         myfile<<add<<endl;
         myfile<<pno<<endl;
         myfile<<mno;
         myfile.close();
        }

    void menu()
    {
        do
        {cout<<endl;
        cout<<"Enter 1 for no power supply"<<endl;
        cout<<"Enter 2 for voltage related complaints"<<endl;
        cout<<"Enter 3 for transformer related complaints"<<endl;
        cout<<"Enter 4 for line related complaints"<<endl;
        cout<<"Enter 5 for pole related complaints"<<endl;
        cout<<"Enter 6 for billing/meter related complaints"<<endl;
        cout<<"Enter 7 to exit";
        cin>>choice;}
        while(choice>7);

    }
     void submenu()
     {

        switch(choice)
        {
        case 1:
            {

            cout<<endl<<"Press A for no supply-line fault";
            cout<<endl<<"Press B for no supply-meter burnt";
            cout<<endl<<"Press C for no supply-conductor snapping";
            cout<<endl<<"Press D for no supply-pole damaged";
            cout<<endl<<"Press E for no supply-total area";
            cin>>option;

            break;

            }
        case 2:
            {cout<<endl<<"Press A for voltage low";
            cout<<endl<<"Press B for voltage high";
            cout<<endl<<"Press C for dim supply";
            cout<<endl<<"Press D for voltage fluctuation";
            cin>>option;
            break;

            }
        case 3:
            {cout<<endl<<"Press A for transformer cable burnt";
            cout<<endl<<"Press B for transformer oil leakage";
            cout<<endl<<"Press C for transformer sparking";
            cout<<endl<<"Press D for transformer smoke";
            cin>>option;
             break;
            }
        case 4:
            {cout<<endl<<"Press A for tree branches touching line";
            cout<<endl<<"Press B for line twisted";
            cout<<endl<<"Press C for loose contact";
            cout<<endl<<"Press D for line lying low";
            cout<<endl<<"Press E for rusted cross arms";
            cin>>option;
             break;
            }
        case 5:
            {cout<<endl<<"Press A for pole rusted";
            cout<<endl<<"Press B for shock from pole";
            cout<<endl<<"Press C for pole leaning";
            cout<<endl<<"Press D for broken stay wire";
            cin>>option;
             break;
            }
        case 6:
            {cout<<endl<<"Press A for meter burnt";
            cout<<endl<<"Press B for no reading taken";
            cout<<endl<<"Press C for defective meter";
            cout<<endl<<"Press D for no bill received";
            cout<<endl<<"Press E for tariff/quota related complaints";
            cout<<endl<<"Press F for wrong meter reading";
            cout<<endl<<"Press G for excessive billing";
            cout<<endl<<"Press H for delayed bill";
            cin>>option;
             break;
            }
        case 7:
            {cout<<"Thanks for visiting";
             break;
            }
        default:
            {cout<<endl;
                cout<<"invalid choice";
                }
          }

    }
    void employee()
    {
           if (choice==1)
           {ifstream fin("Raman.txt");
           char x;
           string s;
           cout<<"/n";
           x=fin.get();
           while(!fin.eof())
           {
           while(x!='-')
            {
           s+=x;
           x=fin.get();
           }
           cout<<"\n";
           cout<<s;
           s="";
           cout<<"/n";
           x=fin.get();
           }
           fin.close();
           cout<<"This employee is assigned to complete the desired task.";
           cout<<"For any more queries you can contact him/her";}
          else if (choice==2)
             {ifstream obj("Shagun.txt");
           char y;
           string t;
           cout<<"\n";
           y=obj.get();
           while(!obj.eof())
           {
           while(y!='-')
            {
           t+=y;
           y=obj.get();
           }
           cout<<"\n";
           cout<<t;

           t="";
           cout<<"\n";
           y=obj.get();
           }
           obj.close();
           cout<<endl<<"This employee is assigned to complete the desired task.";
           cout<<endl<<"For any more queries you can contact him/her";}
           else if(choice==3)
           {
                ifstream fin("Ramesh.txt");
           char x;
           string s;
            cout<<"\n";
           x=fin.get();
           while(!fin.eof())
           {
           while(x!='-')
            {
           s+=x;
           x=fin.get();
           }
           cout<<"\n";
           cout<<s;
           s="";
           cout<<"\n";
           x=fin.get();
           }
           fin.close();
           cout<<endl<<"This employee is assigned to complete the desired task.";
           cout<<endl<<"For any more queries you can contact him/her";}
           else if(choice==4)
           {
                ifstream fin("Aman.txt");
           char x;
           string s;
            cout<<"\n";
           x=fin.get();
           while(!fin.eof())
           {
           while(x!='-')
            {
           s+=x;
           x=fin.get();
           }
           cout<<"\n";
           cout<<s;
           s="";
           x=fin.get();
           }
           fin.close();
           cout<<endl<<"This employee is assigned to complete the desired task.";
           cout<<endl<<"For any more queries you can contact him/her";}
           else if(choice==5)
           {
                ifstream fin("Chandan.txt");
           char x;
           string s;
           cout<<"\n";
           x=fin.get();
           while(!fin.eof())
           {
           while(x!='-')
            {
           s+=x;
           x=fin.get();
           }
           cout<<"\n";
           cout<<s;
           s="";
           cout<<"\n";
           x=fin.get();
           }
           fin.close();
           cout<<endl<<"This employee is assigned to complete the desired task.";
           cout<<endl<<"For any more queries you can contact him/her";}
           else if(choice==6)
           {
              ifstream fin("Gorang.txt");
           char x;
           string s;
            cout<<"\n";
           x=fin.get();
           while(!fin.eof())
           {
           while(x!='-')
            {
           s+=x;
           x=fin.get();
           }
           cout<<"\n";
           cout<<s;
           s="";
           cout<<"\n";
           x=fin.get();
           }
           fin.close();
           cout<<endl<<"This employee is assigned to complete the desired task.";
           cout<<endl<<"For any more queries you can contact him/her";}
    }
    void feedback()
    {
        int rating;
        cout<<endl;
        cout<<endl;
        cout<<" FEEDBACK "<<endl;
        cout<<"Press 1 for very satisfied"<<endl;
        cout<<"Press 2 for satisfied"<<endl;
        cout<<"Press 3 for very good"<<endl;
        cout<<"Press 4 for good"<<endl;
        cout<<"Press 5 for needs improvement"<<endl;
        cin>>rating;
        ofstream file("feedback.txt",ios::app);
        file<<rating<<endl;
        file.close();
    }
};
    main()
{
    complaintcell obj;
    obj.menu();
    obj.submenu();
    obj.employee();
    obj.feedback();

}





