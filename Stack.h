#pragma once
#include <string>
#include <iostream>

const int ARRAY_SIZE = 5;

struct Stack_item {
	Stack_item* next;
	std::string inf;
};

struct Stack {
public:
	Stack_item* sp;
	Stack() {
		sp = NULL;
	}
	void Push(std::string inf) {
		Stack_item* pTemp = new Stack_item();
		pTemp->inf = inf;
		pTemp->next = sp;
		sp = pTemp;
	}
	int Delete() {
		if (sp == NULL) return 0;
		Stack_item* pTemp = sp;
		sp = sp->next;
		delete(pTemp);
		return 1;
	}
	bool IsEmpty() {
		if (sp == NULL) return true;
		return false;
	}
	std::string Show() {
		std::string str;
		Stack_item* pCurrent = sp;
		while (pCurrent != NULL) {
			str += " || " + pCurrent->inf + " || ";
			pCurrent = pCurrent->next;
		}
		return str;
	}
};

