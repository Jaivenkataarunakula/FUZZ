#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void process_request(char *request) {
char buffer[256];
if (strlen(request) > 255) {
printf("Input too long!\n");
return;
}
strcpy(buffer, request); // Vulnerability: buffer overflow
printf("Processing request: %s\n", buffer);
}
int main(int argc, char *argv[]) {
if (argc < 2) {
printf("Usage: %s <request>\n", argv[0]);
return 1;
}
process_request(argv[1]);
return 0;
}
