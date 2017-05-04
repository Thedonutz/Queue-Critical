#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
class Node
{
public:
	Node() { next = NULL; }
	Node(int Social, string First, string Last, Node* Link) 
	{ first = First; last = Last; ssn = Social; next = Link; }
	int ssn;
	char type;
	string first, last;
	Node* next;
};
class Queue
{
public:
	Queue();
	int size() const;
	void AddPatient(const int& item, string first, string last);
	void CriticalPatient(int social, string first, string last, int x);
	int cancelPatient(string first, string last, int ssn);
	int Takeoutoperation();
	bool is_empty() const;
	void empty();
	//Returns the oldest (top) element
	int top() const;
	void print();
private:
	Node *Head;
	Node *Tail;
	int count;
};
