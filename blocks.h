//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "scripts/dwmupdates.sh", 30, 		0}, 
	{"", "scripts/dwmcpu.sh", 30, 		0}, 
	{"", "scripts/dwmvolume.sh", 0, 		0}, 
	{"", "scripts/dwmweather.sh", 18000, 		0}, 
	{"", "scripts/dwmclock.sh",	5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
