#include <iostream>
#include <cstring>
int main() {
   int c;
	FILE *f;
	f = fopen("output.txt", "w");
	char str[20] = "Hello World!";
	if (f)
	{
		for(int i=0; i < strlen(str); i++) 
			putc(str[i],f);
         fclose(f);
	}
   else{
      std::cout << "Error";
   }
}