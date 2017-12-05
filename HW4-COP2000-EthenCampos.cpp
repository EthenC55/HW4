//Ethen Campos
//HW4-COP2000-EthenCampos
//This program will choose a winner by determining who had the lowest time or
//If two people tied.

#include <iostream>
#include <string>
using namespace std;

// Function Prototype
void getRaceTimes(string &, double &);
void findWinner(string, string, string, double, double, double);
void welcome();
double raceAverage(double, double, double);

int main()
{
	//Variables.
	string name1, 
		   name2, 
		   name3;
	
	double time1 = 0, 
		   time2 = 0, 
		   time3 = 0;


	//Display Menu.
	welcome();

	//Racer 1 Data.
	getRaceTimes( name1, time1);

	//Racer 2 Data.
	getRaceTimes( name2, time2);

	//Racer 3 Data.
	getRaceTimes( name3, time3);

	//Determine a Winner.
	findWinner(name1, name2, name3, time1, time2, time3);

	//Average of all race times.
	double average = raceAverage( time1, time2, time3);
	cout << endl;
	cout << endl;
	cout << "Overall Race Time Average: " << average << endl;
	system("pause");
	return 0;
}
//Function Definition
void getRaceTimes(string &racerName, double &racerTime)
{
	cout << "Please enter the racer's first name > ";
			cin >> racerName;
		cout << "Please enter the racer's time > ";
			cin >> racerTime;
		while (racerTime <= 0)
		{
			cout << "Invalid time input...time must be greater than 0 ";
			cout << "Enter the racers time: ";
				cin >> racerTime;
		}
}

void findWinner(string racerName1, string racerName2, string racerName3, double racerTime1, double racerTime2, double racerTime3)
{
	string nameOfWinner1, nameOfWinner2;
	double timeOfWinner = 0;

	if (racerTime1 < racerTime2 && racerTime3)
	{
		nameOfWinner1 = racerName1;
		timeOfWinner = racerTime1;
		cout << "Congratulations " << nameOfWinner1 << "!" << "You are the winner!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime1 && racerTime2 < racerTime3)
	{
		nameOfWinner1 = racerName1;
		nameOfWinner2 = racerName2;
		timeOfWinner = racerTime1;
		cout << "We have a TIE " << nameOfWinner1 << " and " << nameOfWinner2 << " win!!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	if (racerTime2 < racerTime3 && racerTime1)
	{
		nameOfWinner1 = racerName2;
		timeOfWinner = racerTime2;
		cout << "Congratulations " << nameOfWinner1 << "!" << "You are the winner!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime2 && racerTime3 < racerTime1)
	{
		nameOfWinner1 = racerName2;
		nameOfWinner2 = racerName3;
		timeOfWinner = racerTime2;
		cout << "We have a TIE " << nameOfWinner1 << " and " << nameOfWinner2 << " win!!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	if (racerTime3 < racerTime1 && racerTime2)
	{
		nameOfWinner1 = racerName3;
		timeOfWinner = racerTime3;
		cout << "Congratulations " << nameOfWinner1 << "!" << "You are the winner!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime3 &&racerTime1 < racerTime2)
	{
		nameOfWinner1 = racerName1;
		nameOfWinner2 = racerName3;
		timeOfWinner = racerTime1;
		cout << "We have a TIE " << nameOfWinner1 << " and " << nameOfWinner2 << " win!!" << endl;
		cout << "***** Your winning time is: " << timeOfWinner << " *****" << endl;
	}
	else if (racerTime1 && racerTime2 == racerTime3)
	{
		cout << "We have a 3 way TIE!!! No Winner for this Race..." << endl;
	}
	
}


void welcome()
{
	cout << "*****************************************************************\n";
	cout << "                                                                 \n";
	cout << "Welcome to Race Results Program\n";
	cout << "You areAsked to Enter the Three Racer’s Names\n";
	cout << "and Their Associated Race Time.\n";
	cout << " \n";
	cout << " \n";
	cout << "Please enter a real number for Race Time (the Race Time Must be > 0)\n";
	cout << " \n";
	cout << " \n";
	cout << "Program Developed by: Ethen Campos\n";
	cout << "*****************************************************************\n";
}

double raceAverage(double time1, double time2, double time3)
{
	double average = 0;
	//Calculate average
	average = (time1 + time2 + time3) / 3;
	return average;
}