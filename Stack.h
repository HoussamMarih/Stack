#pragma once
#include <iostream>
using namespace std;
template <class T>

class Stack
{
private:
	T* tab;
	int sommet;
	int capacite;
public:
	Stack(int c=5);
	void push(const T&);
	void pop();
	T top() const;
	bool vide() const;
	bool plein() const ;
	void afficher() const;
	~Stack();
};

template <class T>
Stack<T>::Stack(int c) :capacite(c)
{
	tab = new T[capacite];
	sommet = -1;
	
}

template<class T>
void Stack<T>::push(const T& v)
{
	if (plein()) {
		cout << "La pile est plein" << endl;
	}
	else {
		sommet++;
		tab[sommet] = v;
	}
}

template<class T>
void Stack<T>::pop()
{
	if (vide()) {
		cout << "La pile est vide" << endl;
	}
	else {
		sommet--;
	}
}

template<class T>
T Stack<T>::top() const
{
	if (vide()) {
		cout << "La pile est vide" << endl;
	}
	else {
		return tab[sommet];
	}
}

template<class T>
bool Stack<T>::vide() const
{
	return sommet == -1;
}

template<class T>
bool Stack<T>::plein() const
{
	return sommet == capacite - 1;
}

template<class T>
void Stack<T>::afficher() const
{
	if (vide()) {
		cout << "La pile est vide" << endl;
	}
	else {
		for (int i = 0; i < capacite; i++) {
			cout << tab[i] << endl;
		}
	}
}

template<class T>
Stack<T>::~Stack()
{
	delete[] tab;
}


