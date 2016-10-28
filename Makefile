main: main.cpp
	g++ -Wall -Werror -std=c++11 -Wl,--no-as-needed -lpthread -o main   main.cpp
run: main
	./main
