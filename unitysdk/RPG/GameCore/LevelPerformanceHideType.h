#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPerformanceHideType_TypeDefinitionIndex = 17189;

	enum class LevelPerformanceHideType : ::System::UInt16
	{
		A = 1,
		C = 2,
		D = 4,
		E = 8,
	};
}
