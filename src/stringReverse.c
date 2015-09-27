/*
 * stringReverse.c
 *
 *  Created on: Sep 26, 2015
 *      Author: jatinmistry
 */

#include "stringReverse.h"

char* StringReverse(char* pszStr)
{
	int nI=0;		//Loop variable.
	int nTemp=0;	//Temporary variable.
	int nLength=0;	//Length of the string.

	//Check input parameter.
	if(pszStr == NULL)
	{
		return NULL;
	}

	//Calculating the length of the string.
	nLength = strlen(pszStr);

	//Run upto middle of the string to reverse.
	for(nI=0; nI < nLength/2; nI++)
	{
		nTemp = pszStr[nI];
		pszStr[nI] = pszStr[nLength - (nI+1)];
		pszStr[nLength - (nI+1)] = nTemp;
	}
	return pszStr;
}


int main()
{
	char szStr[MAX_STR_LEN] = {0};	//String to be reversed.
	char* pszRev = NULL;			//Pointer to reversed string

	//Request input
	printf(STRING_REQ);
	gets(szStr);

	//Reverse the string.
	pszRev = StringReverse(szStr);

	//Check return value.
	if(pszRev != NULL)
	{
		printf(PRG_OUTLINE);
		puts(szStr);
		printf(LINE_FEED);
		return TRUE;
	}

	return FALSE;
}
