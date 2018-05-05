#include <string.h>

/* if you use this, you are mentally retarded */
void leftpad(char *dest, char *src, int target_length)
{
	int length = strlen(src);

	if(length >= target_length)
	{
		strcat(dest, src);
		return;
	}

	while(strlen(dest) + length < target_length)
		strcat(dest, " ");

	strcat(dest, src);
}
