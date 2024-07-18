#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <ctime>


using namespace std;

int main(){

	string key;
	string fname,lname;
    string tel;
    string selection;
    int rent ;
    int rent_days; // string for car selection


		ifstream w("welcome.txt");
		string wel;
while(getline(w,wel)){
	cout<<wel<<endl;

}
    Sleep(2000);
	system("CLS");
	step_1:
	ifstream m("mainmenu.txt");
		string mmenu;
while(getline(m,mmenu)){
	cout<<mmenu<<endl;

}
enter_key:
cout<<endl;
	cout<< "Enter your desired extension: ";
	cin>>key;


	if(key=="1")
	{
		system("CLS");
	ifstream list("garage.txt");
		string cars;
while(getline(list,cars)){
	cout<<cars<<endl;

}
cout<<endl;
system("pause");
system("CLS");
	goto step_1;
system("CLS");
    }

    if (key=="2")
    {
    	system("CLS");

    	cout<<"Enter your full name: ";
    	cin>>fname>>lname;
    	cout<<"Enter your contact number: ";
    	cin>>tel;
    	ofstream n1("khatta.txt", ios::app);
	cout<<"Account created successfully \n";
		n1<<"Customer name: "<<fname<<" "<<lname<<endl;
		//n1<<"___________________________________________"<<endl;
		n1<<"Contact number: "<<tel<<endl;
		//n1<<"___________________________________________"<<endl;



   system("pause");
   system("CLS");

   cout<<"******Moving toward the cars section******";
Sleep(1000);
   system("CLS");

	ifstream list("garage.txt" );
		string cars;
while(getline(list,cars)){
	cout<<cars<<endl;

    }


car_selection:
    cout<< "Enter your desired car name: ";
    cin>>selection;
    cout<< "For how many  days you want to rent this car?: ";
        cin>>rent_days;
if( selection=="civic" ||  selection=="CIVIC" )
{
    rent =rent_days * 51;
   ofstream n2("khatta.txt", ios::app);
        n2<< "Selected car : "<<selection<<endl;
       // n2<<"___________________________________________"<<endl;
        n2<<"Rented for"<<rent_days<< " days"<<endl;
       // n2<<"___________________________________________"<<endl;
        n2<<"Payment will be: "<<rent<<"$"<<endl;
       // n2<<"___________________________________________"<<endl;
}
else if( selection=="SONATA" ||  selection=="sonata" )
{
    rent =rent_days * 52;
   ofstream n2("khatta.txt", ios::app);
        n2<< "Selected car is: "<<selection<<endl;
        n2<<"Payment will be: "<<rent<<"$"<<endl;
}
else if( selection=="GTR" ||  selection=="gtr" )
{
    rent =rent_days * 90;
   ofstream n2("khatta.txt", ios::app);
        n2<< "Selected car is: "<<selection<<endl;
        n2<<"Payment will be: "<<rent<<"$"<<endl;
}
else if( selection=="SUPRA" ||  selection=="supra" )
{
    rent =rent_days * 95;
   ofstream n2("khatta.txt", ios::app);
        n2<< "Selected car is: "<<selection<<endl;
        n2<<"Payment will be: "<<rent<<"$"<<endl;
}
else
{
    cout<< "Please enter valid car name!!"<<endl;
    goto car_selection;
}

ofstream n2("khatta.txt", ios::app);
        time_t current_time = time(0);
        char* ct = ctime(&current_time);
        n2<< "The time of registration is: "<< ct<<endl;


        #define seconds_per_day  86400     // 60 seconds * 60 minutes * 24 hours
        time_t end_time = current_time + (rent_days*seconds_per_day);
        char* et = ctime(&end_time);
        n2<<"The due date for your package is: "<<et<<endl;





        n2<< "-----------------------------------"<<endl;
   system("pause");
   system("CLS");
   goto step_1;

	}

if(key=="3")
{

  system("CLS");
  cout<< "Please wait!!!"<<endl;
  Sleep(2000);
  system("CLS");
  ifstream clients_list("khatta.txt");
		string clients;
while(getline(clients_list,clients)){
	cout<<clients<<endl;
}
system("pause");
system("CLS");
goto step_1;

}

if(key=="4")
{
    string carsin,brands,model,rentperday;
    int limit;

    cout<<"Welcome to the developer menu\nHow many cars do you want to enter"<<endl;
    cin>>limit;
    cout<<endl;

    for(int i = 0;i<limit;i++)
    {
        cout<<"Enter name of car #"<<i+1<<" : ";
        cin>>carsin;
        cout<<"Enter name of #"<<i+1<<" brand: ";
        cin>>brands;
        cout<<"Enter model number: ";
        cin>>model;
        cout<<"Enter price per day of car #"<<i+1<<" : ";
        cin>>rentperday;

        ofstream n3("garage.txt", ios::app);
        n3<<carsin<<"\t\t"<<brands<< "\t\t"<<model<<"\t\t"<<rentperday<<endl;
		system("pause");
		system("CLS");
		goto step_1;
    }

}

if(key=="5")
{
	system("CLS");
	cout<< "Thanks for using my program";
}





return 0;
}
