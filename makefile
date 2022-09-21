CC = g++
CFLAGS=-Wall -Wextra
Vector: Vector

Vector: Vector.o main.o
	$(CC) $(CFLAGS) -o vect Vector.o main.o

Vector.o: Vector.h Vector.cpp
	$(CC) $(CFLAGS) -c Vector.h Vector.cpp

Main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean:
	$(RM) Vector *.o *~
