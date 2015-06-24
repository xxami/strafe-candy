
# make me !

cc=gcc
cflags=-Wall -std=c99 -I.

cfiles=\
	main.c\

always:
	$(cc) $(cflags) $(cfiles) -o strafe-candy
