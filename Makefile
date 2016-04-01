#Name:Tyler Archer
#Date: 31 March 2016
#File: Makefile
#Description: compiles project;

CC= g++
CFLAGS= -c -Wall
TARGET= main

all: $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

clean:
	rm *.o *~
