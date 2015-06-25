
#include <stdio.h>
#include <candy_machine.h>

int main(void) {

	if (!sc_setup()) {
		printf("error: x11 init failed");
	}

	printf("%s\n", "strafe-candy :: on :: waiting");
	
	return 0;

}
