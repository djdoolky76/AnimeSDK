#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonDropOption_TypeDefinitionIndex = 10285;

	enum class EDungeonDropOption : ::System::Byte
	{
		Random = 1,
		Weight = 2,
	};
}
