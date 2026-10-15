#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	enum class ExceptionArgument : ::System::Int32
	{
		obj = 0,
		dictionary = 1,
		dictionaryCreationThreshold = 2,
		array = 3,
		info = 4,
		key = 5,
		collection = 6,
		list = 7,
		match = 8,
		converter = 9,
		queue = 10,
		stack = 11,
		capacity = 12,
		index = 13,
		startIndex = 14,
		value = 15,
		count = 16,
		arrayIndex = 17,
		name = 18,
		mode = 19,
		item = 20,
		options = 21,
		view = 22,
		sourceBytesToCopy = 23,
		start = 24,
		pointer = 25,
		ownedMemory = 26,
		text = 27,
	};
}
