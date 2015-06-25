
# make me !

cc=gcc
cflags=-Wall -std=c99 -I.
libs=-lxcb

cfiles=\
	main.c\
	candy_machine.c\

always:
	$(cc) $(cflags) $(cfiles) -o strafe-candy $(libs)
