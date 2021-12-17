#Mico Barcelona Lab 5


lab5: lab5.o class_stats.o
	gcc lab5.o class_stats.o -o lab5 -lm
 
lab5.o: lab5.c lab5.h
	gcc -c -std=c99 lab5.c -lm

class_stats.o: class_stats.c lab5.h
	gcc -c -std=c99  class_stats.c -lm





