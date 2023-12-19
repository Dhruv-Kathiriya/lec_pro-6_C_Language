/*
Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1

*/
#include<stdio.h>
#include<string.h>

void main(){
	
	char a[26];
	int count=1;
	int i,d;
	
	printf("Enter the name : ");
    gets(a);
	
	for(d='a';d<='z';d++){
            count=0;
		for(i=0;a[i]!=NULL;i++){
			if(d==a[i]){
				count ++;
			}
			printf("%c => %d  ",d,count);
		}
	}
	
	
}


