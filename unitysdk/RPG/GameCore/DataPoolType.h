#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DataPoolType_TypeDefinitionIndex = 10738;

	enum class DataPoolType : ::System::Byte
	{
		SingleObject = 0,
		List = 1,
		HashTable = 2,
	};
}
