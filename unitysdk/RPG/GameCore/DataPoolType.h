#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DataPoolType : ::System::Byte
	{
		SingleObject = 0,
		List = 1,
		HashTable = 2,
	};
}
