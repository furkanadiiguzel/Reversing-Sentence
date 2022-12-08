// LG14_Q2 ->Reverse the words of a sentence using a stack
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "stack_str.h"
#define MAXS 100
#define MAXW 15

char* Reverse(SType* sentence);

int main(void)
{
	char sent[MAXS];
	printf("Enter a sentence:\n");
	scanf(" %[^\n]", sent);

	printf("\nReverse of the sentence is:\n%s\n", Reverse(sent));
	return 0;
}

char* Reverse(SType* sentence)
{
	int i = 0, start = 0, len;
	char word[MAXW] = "";

	stack_t Stack;
	initializeS(&Stack);
	len = strlen(sentence);

	while (i <= len)
	{
		while (sentence[i] != ' ' && sentence[i] != '\0')
			i++;

		strncpy(word, sentence + start, i - start);
		word[i - start] = '\0';
		push(&Stack, word);
		i++;
		start = i;
	}

	strcpy(sentence, "\0");
	while (!isEmptyS(&Stack))
	{
		strcat(sentence, pop(&Stack));
		if (Stack.top >= 0)
			strcat(sentence, " ");
	}
	return sentence;
}