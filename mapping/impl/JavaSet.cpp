#include "JavaSet.h"
#include "../AbstractClass.h"


JavaSet::JavaSet(UDP * udp, jobject set) : AbstractClass::AbstractClass(udp, "Set")
{
	mdSize = getMethodID("size");
	mdToArray = getMethodID("toArray");

	this->set = set;
}

int JavaSet::size() {
	return getInt(set, mdSize);
}

jobjectArray JavaSet::toArray() {
	return (jobjectArray)getObject(set, mdToArray);
}

jobject JavaSet::get(int index) {
	return getArrayElement(toArray(), index);
}