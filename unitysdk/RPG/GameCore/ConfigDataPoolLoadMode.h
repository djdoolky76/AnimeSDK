#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConfigDataPoolLoadMode_TypeDefinitionIndex = 10762;

	enum class ConfigDataPoolLoadMode : ::System::Int32
	{
		Auto = 0,
		MemoryMappedFile = 1,
		LoadAll = 2,
	};
}
