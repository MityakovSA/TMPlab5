#include <iostream>
#include <string>
using namespace std;


class Node
{
	Node* Up;
	Node* L;
	Node* R;
public:
	Node(Node* _Up)
	{
		Up = _Up;
		L = nullptr;
		R = nullptr;
		Up
	}
	Node* getUp() { return Up; }
	Node* getL() { return L; }
	Node* getR() { return R; }
	void chgL(Node* node) { L = node; }
	void chgR(Node* node) { R = node; }
};


void add(int _a)
{

}


void del()
{

}


void get()
{

}


void handler(string _com)
{
	if (_com == "add")
	{
		int a;
		cin >> a;
		add(a);
	}
	else if (_com == "del") del();
	else if (_com == "get") get();
	else cout << "Invalid command!" << endl;
}


void main()
{
	int n;
	string com;
	Node* root = new Node(nullptr);
	Node* last = new Node(root);
	cout << "Enter N: ";
	cin >> n;
	cout << "Enter commands:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> com;
		handler(com);
	}
}