// main.cpp : Defines the entry point for the console application.
//

+ACM-include +ACI-stdafx.h+ACI-
+ACM-include +ADw-iostream+AD4-
+ACM-include +ACI-elephant.h+ACI-
+ACM-include +ACI-preserve.h+ACI-

int main()
+AHs-
	// static Preserve preserve+ADs- // TODO: Dynamic preserve. 

	Elephant elephant(3'500, Direction::kNorth)+ADs-
	GPS gps(8, 8)+ADs-
	elephant.tag(gps)+ADs-
	elephant.findHerd()+ADs-
	const auto time+AHs- elephant.getElapsedTime() +AH0AOw-
	std::cout +ADwAPA- +ACI-Herd found in +AD0- +ACI- +ADwAPA- time +ADwAPA- std::endl+ADs-

	return 0+ADs-
+AH0-
