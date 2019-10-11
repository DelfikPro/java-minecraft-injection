#pragma once

#include "../AbstractClass.h"

class JavaSet : public AbstractClass
{
public:
	JavaSet(UDP * udp, jobject set);

	int size();
	jobjectArray toArray();

	jobject get(int index);
private:
	jmethodID mdSize;
	jmethodID mdToArray;

	jobject set;
};

