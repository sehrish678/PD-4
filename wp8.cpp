	#include<iostream>
	using namespace std;
	void printheader();
	void calculateaggregate1(string name1,float matricmarksstd1,float intermarksstd1,float ecatmarksstd1);
	void calculateaggregate2(string name2,float matricmarksstd2,float intermarksstd2,float ecatmarksstd2);
	void comparemarks(string name1,float ecatmarksstd1,string name2,float ecatmarksstd2);
	main()
	{
	 string name1;
	cout <<"Enter the name of student1: ";
	cin >> name1;
	string name2;
	cout <<"Enter the name of student2: ";
	cin >> name2;
	float matricmarksstd1;
	cout <<"Enter the Matric score of student1: ";
	cin>> matricmarksstd1;
	float matricmarksstd2;
	cout <<"Enter the Matric score of student2: ";
	cin >> matricmarksstd2;
	float intermarksstd1;
	cout <<"Enter the Inter score of student1: ";
	cin >> intermarksstd1;
	float intermarksstd2;
	cout <<"Enter the Inter score of student2: ";
	cin >> intermarksstd2;
	float ecatmarksstd1;
	cout <<"Enter the ECAT score of student1: ";
	cin >> ecatmarksstd1;
	float ecatmarksstd2;
	cout <<"Enter the ECAT score of student2: ";
	cin >> ecatmarksstd2;

	 printheader();
	 calculateaggregate1(name1,matricmarksstd1,intermarksstd1,ecatmarksstd1);
	
	 calculateaggregate2(name2,matricmarksstd2,intermarksstd2, ecatmarksstd2);
	 comparemarks(name1,ecatmarksstd1,name2,ecatmarksstd2);
	}
	
	void printheader()
	{
	cout<<"##     ##  ########  #########     ##    ####    ##    ## ######   ####    ####   ######   ###   ###    ##"<<endl;
	cout<<"##     ##  ##           ##       ## ##   #   ##  ## ## ##   ##    ##      ##        ##   ##   ##   ##   ##"<<endl;
	cout<<"##     ##  ########     ##      #######  #   ##  ## #  ##   ##     ####    ####     ##   ##   ##  #  ##  # "<<endl;  
	cout<<"##     ##  ##           ##      ##   ##  #   ##  ##    ##   ##        ##      ##    ##   ##   ##  ##  ## # "<<endl;
	cout<<" ######    ########     ##     ###   ### ####   ###    ### #####   ####    ####   ######   ###   ####  ### "<<endl;
	cout<<" "<<endl;
	cout <<"                   #####  ##   ##   #####   ########  #######   ##    ##  "<<endl;
	cout<<"                   ##       ## ##   ##          ##     ##        ## ## ##   "<<endl;
	cout<<"                    #####    ##      #####      ##     #######   ## #  ##    "<<endl;
	cout<<"                        ##   ##          ##     ##     ##        ##    ##  "<<endl;
	cout<<"                    #####    ##      #####      ##     #######  ####  #### "<<endl;
	cout<<" "<<endl;
	}
	
	void calculateaggregate1(string name1,float matricmarksstd1,float intermarksstd1,float ecatmarksstd1,float aggregate1)
	{ float aggregate;
	aggregate1 = ((matricmarksstd1*0.3)+(intermarksstd1*0.3)+(ecatmarksstd1*0.4))*100;
	cout<<"Aggregate1: "<<aggregate1<<endl;
	}
	void calculateaggregate2(string name2,float matricmarksstd2,float intermarksstd2,float ecatmarksstd2,float aggregate2)
	{ float aggregate;
	aggregate2 = ((matricmarksstd2*0.3)+(intermarksstd2*0.3)+(ecatmarksstd2*0.4))*100;
	cout<<"Aggregate2: "<<aggregate2<<endl;
	}
	void comparemarks(string name1,float ecatmarksstd1,string name2,float ecatmarksstd2)
	if(ecatmarksstd1 > ecatmarksstd2)
	{
	cout<<name1;
	}
	else
	{
	cout<<name2;
	}
	}