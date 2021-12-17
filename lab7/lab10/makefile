#Mico Barcelona
#Lab10

lab10: lab10.o ParseCmd.o RunExtCmd.o ProcessCmd.o Redirection.o
	gcc lab10.o ParseCmd.o RunExtCmd.o ProcessCmd.o Redirection.o -o lab10 -Wall
lab10.o: lab10.c lab9_10.h
	gcc -c -std=c99 lab10.c  -Wall
ParseCmd.o: ParseCmd.c lab9_10.h
	gcc -c -std=c99 ParseCmd.c -Wall
RunExtCmd.o: RunExtCmd.c lab9_10.h
	gcc -c -std=c99  RunExtCmd.c -Wall
ProcessCmd.o: ProcessCmd.c lab9_10.h
	gcc -c -std=c99 ProcessCmd.c -Wall
Redirection.o: Redirection.c lab9_10.h
	gcc -c -std=c99 Redirection.c -Wall

