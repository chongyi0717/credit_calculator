main:main.o ncku_credit.o
	g++ -o main main.o ncku_credit.o

ncku_credit.o:ncku_credit.cpp
	g++ -c ncku_credit.cpp

main.o:main.cpp
	g++ -c main.cpp

