build: ;
	g++ main.cc -Wall -lglut -lGL -o runnable.out
run: build; 
	./runnable.out