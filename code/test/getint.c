#include "syscall.h"

int main(){
	int *i = 0;
	
	GetInt(i);
	PutInt(*i);
	PutChar('\n');
	return 0;
}
