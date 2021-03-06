#include <string>
#include <iostream>
using namespace std;
#include "Song.h"

Song::Song(const string sName, const int sMins, const int sSecs)
{
	name = sName;
	mins = sMins;
	secs = sSecs;
}

Song::~Song()
{}

Song::Song(const Song &songToCopy)
{
	name = songToCopy.name;
	mins = songToCopy.mins;
	secs = songToCopy.secs;
}

void Song::operator=(const Song &right)
{
	name = right.name;
	mins = right.mins;
	secs = right.secs;
}

int Song::getMin()
{
	return mins;
}

int Song::getSec()
{
	return secs;
}

string Song::getName()
{
	return name;
}
