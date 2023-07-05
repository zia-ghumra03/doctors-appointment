#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

class doctor
{
    protected:
        char dnm[50],spc[50];
    public:
        void docnm()
        {
            cout<<"Enter your doctor name:"<<endl;
            cin>>dnm;
            cout<<"Enter your doctor specialization:"<<endl;
            cin>>spc;
        }          
};

class patient
{
    protected:
     int age;
     char pnm[50],add[50],em[50];

    public:
        void info()
        {
            cout<<"Enter your name:"<<endl;
            cin>>pnm;
            cout<<"Enter your age:"<<endl;
            cin>>age;
            cout<<"Enter your address:"<<endl;
            cin>>add;
        }

        void emry()
        {
            
            cout<<"What is the emergency?"<<endl;
            cin>>em;
            cout<<"Enter your name:"<<endl;
            cin>>pnm;
            cout<<"Enter your age:"<<endl;
            cin>>age;
            cout<<"Enter your address:"<<endl;
            cin>>add;
            cout<<"Please folllow instructions given by nurse ->"<<endl;
            cout<<"You will be attended by Dr.Hansraaj Hathi"<<endl;
        }

        void old()
        {
            cout<<"enter your name:"<<endl;
            cin>>pnm;
        }
};

class app:public doctor ,public patient{
    private:
        int count=0;

    public:
        ~app()
        {
            cout<<"SEE YOU SOON \3"<<endl;
        }
        void put()
        {   
            cout<<"Patient Name:"<<pnm<<endl;
            cout<<"Your appointment has been booked \n";
            cout<<"With doctor:"<<dnm<<endl;
        }
};

int main()
{
    system("cls");
    system("Color b4");
    cout<<setw(70)<<"WELCOME!!"<<endl;
    cout<<setw(78)<<"\3 HEALING ANGEL MEDICARE \3"<<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<endl;  cout<<endl;  cout<<endl;

    cout<<setw(80)<<"Doctors available are :         "<<endl;
    cout<<setw(80)<<"Dr.Mashoor Gulati : M.D.Medicine"<<endl
        <<setw(80)<<"Dr.Munna Bhai : M.B.B.S.        "<<endl
        <<setw(80)<<"Dr.Mcstuffins : Pediatrician    "<<endl
        <<setw(80)<<"Dr.Hansraaj Hathi : E.R.Medicine"<<endl;
        cout<<endl;    cout<<endl;    cout<<endl;

    app a[3];
    int ch,count=1;

            for(int i=0;i<3;i++)
            {   
                cout<<endl;   cout<<endl;    cout<<endl;
                cout<<setw(80)<<"Are you :                                                    "<<endl;
                cout<<setw(80)<<"An emergency patient?   Then enter 1.                        "<<endl;
                cout<<setw(80)<<"An Old pateint               enter 2.                        "<<endl;
                cout<<setw(80)<<"A New patient                enter 3.                        "<<endl;
                
                cin>>ch;
                if(ch==3)
                {
                     cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                    a[i].docnm();
                    a[i].info();
                    cout<<"**************************************************************************************************************************************************************"<<endl;
                    cout<<endl;    cout<<endl;    cout<<endl;
                    a[i].put();
                    cout<<"Appointment number:"<<count<<endl;
                    count++;
                    cout<<endl;    cout<<endl;    cout<<endl;
                    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                }   

                else if (ch==1)
                {
                    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                    a[i].emry();
                    cout<<"**************************************************************************************************************************************************************"<<endl;
                } 
                else
                {
                    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                    a[i].docnm();
                    a[i].old();
                    cout<<"*************************************************************************************************************************************************************"<<endl;
                    cout<<endl;    cout<<endl;    cout<<endl;
                    a[i].put();
                    cout<<"Appiontment number:"<<count<<endl;
                    count++;
                    cout<<endl;     cout<<endl;     cout<<endl;
                    cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
                }
            }    
         return 0;
}


