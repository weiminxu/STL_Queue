#include <iostream>
#include <list>
#include <deque>
#include <queue>

using namespace std;

int main()
{
	/*
	queue<int, deque<int>> q;
	queue<int, list<int>> q;
	q.empty();
	q.size();
	q.front();
	q.back();
	q.pop();
	q.push(item);
	
	*/
	queue<int, deque<int>> qd;//queue<int> qd;
	queue<int, list<int>> ql;

	qd.push(5);
	cout << qd.back() <<endl;
	cout << qd.front() << endl;
	cout << "----------------" << endl;
	qd.push(30);
	cout << qd.back() << endl;
	cout << qd.front() << endl;
	cout << "----------------" << endl;
	qd.push(9);
	cout << qd.back() << endl;
	cout << qd.front() << endl;
	cout << "----------------" << endl;
	qd.push(24);
	cout << qd.back() << endl;
	cout << qd.front() << endl;
	cout << "----------------" << endl;

	while (qd.size() != 0)
	{
		cout << qd.front() << endl;
		qd.pop();
	}

	if (qd.empty() == true)
	{
		cout << "queue is empty now!" << endl;
	}

	return 0;
}