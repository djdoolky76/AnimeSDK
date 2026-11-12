#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HashTableKeyType_TypeDefinitionIndex = 10755;

	enum class HashTableKeyType : ::System::Byte
	{
		None = 0,
		Int32 = 1,
		UInt32 = 2,
		String = 3,
	};
}
