#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;


void main()
{
	int Choice1, Choice2;
	string first, last;
	int social;
	Queue Heart, Lung, Plastic;
	bool Hospital = true;

	
	while (Hospital)
	{
		cout << " Weclome to the Starlin City Hospital \n";
		cout << "1. Heart Clinic \n 2. Lung Clinic \n 3. Plastic Surgery\n 4. Exit. \n";
		cout << "Please Enter Your Choice: ";
		cin >> Choice1;
		while(Choice1 == 1)
		{
			system("cls");
			//Heart Clinic
			cout << " Welcome to Heart Clinic \n 1. Add Patient \n 2. Add criticall ill \n 3. Take out for operation \n 4. Cancel patient \n 5. List Patients \n 6. Changee Department" << endl;
			cout << " Please Enter your choice: \n";
			cin >> Choice2;
			switch (Choice2)
			{
			case 1:
				//ADD patient
				cout << "Please Enter SSN: ";
				cin >> social;
				cout << endl << "Please Enter your First Name: ";
				cin >> first;
				cout << endl << "Please Enter your Last Name: ";
				cin >> last;
				cout << endl;
				Heart.AddPatient(social, first, last);
				cout << "Added " << last << "," << first << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				cout << "Please Enter SSN: ";
				cin >> social;
				cout << endl << "Please Enter your First Name: ";
				cin >> first;
				cout << endl << "Please Enter your Last Name: ";
				cin >> last;
				cout << endl;
				Heart.CriticalPatient(social, first, last, 1);
				cout << "Added " << last << "," << first << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				//Pop top
				if (Heart.is_empty() == false)
				{
					Heart.Takeoutoperation();
					cout << "Patient Added to Operation Room! GOOD LUCK! " << endl;
					system("pause");
					system("cls");
					break;
				}
				else
				{
					cout << "No Patients to Take out. " << endl;
					system("pause");
					system("cls");
					break;
				}
			case 4:
				cout << "Please Enter SSN of Patient you wish to cancel. ";
				cin >> social;
				cout << endl << "Please The First Name: ";
				cin >> first;
				cout << endl << "Please The Last Name: ";
				cin >> last;
				cout << endl;
				Heart.cancelPatient(first, last, social);
				system("pause");
				system("cls");
				break;
			case 5:
				//Print Queue
				cout << " List of Current Patients : " << endl;
				Heart.print();
				system("pause");
				break;
			case 6:
				system("cls");
				Choice1 = 5;
				break;
			default:
				cout << " Please only enter 1-6, Going to Main Menu." << endl << endl;
				break;
			}
		}
		while(Choice1 == 2)
		{
			//
			system("cls");
			cout << " Welcome to Lung Clinic \n 1. Add Patient \n 2. Add criticall ill \n 3. Take out for operation \n 4. Cancel patient \n 5. List Patients \n 6. Changee Department" << endl;
			cout << " Please Enter your choice: \n";	
			cin >> Choice2;
			switch (Choice2)
			{
			case 1:
				//ADD patient
				cout << "Please Enter SSN: ";
				cin >> social;
				cout << endl << "Please Enter your First Name: ";
				cin >> first;
				cout << endl << "Please Enter your Last Name: ";
				cin >> last;
				cout << endl;
				Lung.AddPatient(social, first, last);
				cout << "Added " << last << "," << first << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				//Add Critical
				cout << "Please Enter SSN: ";
				cin >> social;
				cout << endl << "Please Enter your First Name: ";
				cin >> first;
				cout << endl << "Please Enter your Last Name: ";
				cin >> last;
				cout << endl;
				Lung.CriticalPatient(social, first, last, 1);
				cout << "Added " << last << "," << first << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				//Pop top
				if (Lung.is_empty() == false)
				{
					Lung.Takeoutoperation();
					cout << "Patient Added to Operation Room! GOOD LUCK! " << endl;
					system("pause");
					system("cls");
					break;
				}
				else
				{
					cout << "No Patients to Take out. " << endl;
					system("pause");
					system("cls");
					break;
				}
			case 4:
				//Cancel matching SSN
				cout << "Please Enter SSN of Patient you wish to cancel. ";
				cin >> social;
				cout << endl << "Please The First Name: ";
				cin >> first;
				cout << endl << "Please The Last Name: ";
				cin >> last;
				cout << endl;
				Lung.cancelPatient(first, last, social);
				system("pause");
				system("cls");
				break;
			case 5:
				//Print Queue
				//Print Queue
				cout << " List of Current Patients : " << endl;
				Lung.print();
				system("pause");
				break;
			case 6:
				system("cls");
				Choice1 = 5;
				break;
			default:
				cout << " Please only enter 1-6, Going to Main Menu." << endl << endl;
				break;
			}
		}
		while(Choice1 == 3)
		{
			//Plastic Surgery
			system("cls");
			cout << " Welcome to Plastic Surgery Clinic \n 1. Add Patient \n 2. Add criticall ill \n 3. Take out for operation \n 4. Cancel patient \n 5. List Patients \n 6. Changee Department" << endl;
			cout << " Please Enter your choice: \n";
			cin >> Choice2;
			switch (Choice2)
			{
			case 1:
				//ADD patient
				cout << "Please Enter SSN: ";
				cin >> social;
				cout << endl << "Please Enter your First Name: ";
				cin >> first;
				cout << endl << "Please Enter your Last Name: ";
				cin >> last;
				cout << endl;
				Plastic.AddPatient(social, first, last);
				cout << "Added " << last << "," << first << endl;
				system("pause");
				system("cls");
				break;
			case 2:
				//Add Critical
				cout << "Please Enter SSN: ";
				cin >> social;
				cout << endl << "Please The First Name: ";
				cin >> first;
				cout << endl << "Please The Last Name: ";
				cin >> last;
				cout << endl;
				Plastic.CriticalPatient(social, first, last,1);
				cout << "Added " << last << "," << first << endl;
				system("pause");
				system("cls");
				break;
			case 3:
				//Pop top
				if (Plastic.is_empty() == false)
				{
					Plastic.Takeoutoperation();
					cout << "Patient Added to Operation Room! GOOD LUCK! " << endl;
					system("pause");
					system("cls");
					break;
				}
				else
				{
					cout << "No Patients to Take out. " << endl;
					system("pause");
					system("cls");
					break;
				}
			case 4:
				//Cancel matching SSN
				cout << "Please Enter SSN of Patient you wish to cancel. ";
				cin >> social;
				cout << endl << "Please The First Name: ";
				cin >> first;
				cout << endl << "Please The Last Name: ";
				cin >> last;
				cout << endl;
				Plastic.cancelPatient(first, last, social);
				system("pause");
				system("cls");
				break;
			case 5:
				//Print Queue
				//Print Queue
				cout << " List of Current Patients : " << endl;
				Plastic.print();
				system("pause");
				break;
			case 6:
				system("cls");
				Choice1 = 5;
				break;
			default:
				cout << " Please only enter 1-6" << endl << endl;
				system("cls");
				break;
			}
		}
		if (Choice1 == 5)
			continue;
		else if (Choice1 == 4)
			Hospital = false;
		else
		{
			cout << "Not a Valid Choice try again. only 1,2,3 or 4 To exit. " << endl << endl;
		}		
	}
	system("pause");
}