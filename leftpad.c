/* if you use this, you are mentally retarded */
#include <string.h>
#include <stdint.h>

void leftpad(char *dest, char *src, size_t target_length)
{
	size_t length = strlen(src);

	if(length >= target_length)
	{
		strcat(dest, src);
		return;
	}
	
	while(strlen(dest) + length < target_length)
		strcat(dest, " ");

	strcat(dest, src);
}
