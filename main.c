/*
Read different types of data from standard input, process them as shown in output format and print the answer to standard output.

Input format:
First line contains integer N.
Second line contains string S.

Output format:
First line should contain N x 2.
Second line should contain the same string S.

Constraints:

 where S length of string S

Sample Input
5
helloworld
Sample Output
10
helloworld
*/
#include<stdio.h>
#include<stdint.h>
int N;
int main()
{

    char string[10];
	printf("Enter an integer \n");
	scanf("%d",&N);
	printf("%d",N);
	printf("Enter the string \n");
	scanf("%s",&string);
	printf("%d",N);
	printf("Output is \n");
	printf("%d \n",2*N);
	printf("%d",N);
	printf("%s \n",string);
	return 0;
}
