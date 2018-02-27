all: ooLinkedList clean

ooLinkedList: Lab3.o LinkedList.o Node.o
	g++ Lab3.o LinkedList.o Node.o -o ooLinkedList

Lab3.o: Lab3.cpp LinkedList.h Node.h
	g++ -c Lab3.cpp

LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

clean:
	rm -rf *o
