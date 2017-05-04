#include "Queue.h"

//default constructor

Queue::Queue()
{
	Head = Tail = NULL;
	count = 0;
}

//return the size of the queue
int Queue::size() const
{
	return count;
}

//check if queue is empty
bool Queue::is_empty() const
{
	return (Head == NULL);
}

//add elements to the queue
void Queue::AddPatient(const int& ssn, string first, string last)
{
	if (is_empty())
	{
		Head = new Node(ssn, first, last, NULL);
		Tail = Head;
		count++;
	}
	else
	{
		Tail->next = new Node(ssn, first, last, NULL);
		Tail = Tail->next;
		count++;
	}
}
//remove an element from queue
int Queue::Takeoutoperation()
{
	if (is_empty())
	{
		cout << "Queue is Empty\n";
		exit(1);
	}
	else
	{
		Node *p;
		int item;
		p = Head;
		item = Head->ssn;
		Head = Head->next;
		if (Head == NULL)
		{
			Tail = NULL;
		}
		delete p;
		count--;
		return item;
	}

}

//clear the queue
void Queue::empty()
{
	Node* temp;
	while (Head != NULL)
	{
		temp = Head;
		Head = Head->next;
		delete temp;
	}
	Tail = NULL;
	count = 0;
}
//print the first item
int Queue::top() const
{
	if (is_empty())
	{
		cout << "Queue is empty\n";
	}
	else
	{
		return Head->ssn;
	}
	return 0;
}

//Print all the queue
void Queue::print()
{
	if (is_empty())
	{
		cout << "Queue is Empty\n";
	}
	else
	{
		Node* t = Head;
		while (t != NULL)
		{
			int temp;
			string temp1, temp2;
			temp = t->ssn;
			temp1 = t->first;
			temp2 = t->last;
			cout << temp << " " << temp1 << " " << temp2 << endl;
			t = t->next;
		}
		delete t;
		
	}
}
int Queue::cancelPatient(string first, string last, int ssn) //CAR
{
	if (count == 0)
		cout << " No More Patients in list " << endl;
	else 
	{
		Node* temp = Head;
		while (temp != NULL)
		{
			if (ssn == temp->ssn)
			{
				Head = Head->next;
				delete temp;
				count--;
				return 0;
			}
			else
				temp = temp->next;
		}
		cout << "Patient Not Found " << endl;
	}
}


void Queue::CriticalPatient(int social, string firstN, string lastN, int x)
{
	Node* temp1 = new Node;
	if (Head == NULL)
	{
		AddPatient(social,firstN,lastN);
	}
	else
	{
		temp1->ssn = social;
		temp1->first = firstN;
		temp1->last = lastN;
		temp1->next = NULL;
		if (x == 1)
		{
			temp1->next = Head;
			Head = temp1;
		}
		else
		{
			Node* temp2 = Head;
			for (int i = 1; i < (x - 1); i++)
			{
				temp2 = temp2->next;
			}
			temp1->next = temp2->next;
			temp2->next = temp1;
		}
	}
	count++;
}