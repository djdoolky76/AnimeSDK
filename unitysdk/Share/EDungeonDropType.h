#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonDropType_TypeDefinitionIndex = 10260;

	enum class EDungeonDropType : ::System::Byte
	{
		Reduce = 1,
		Repeat = 2,
	};
}
