#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ConfigDataPoolLoadMode : ::System::Int32
	{
		Auto = 0,
		MemoryMappedFile = 1,
		LoadAll = 2,
	};
}
