//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwmupdates.sh", 30, 		0}, 
	{"", "dwmcpu.sh", 30, 		0}, 
	{"", "dwmvolume.sh", 0, 		1}, 
	{"", "dwmweather.sh", 18000, 		0}, 
	{"", "dwmclock.sh",	60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
