install : main.cpp io.cpp io.h system.cpp system.h
	g++ main.cpp io.cpp system.cpp --std=c++11 -o cppconsole
