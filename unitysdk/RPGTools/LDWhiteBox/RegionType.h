#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int RegionType_TypeDefinitionIndex = 49981;

	enum class RegionType : ::System::Int32
	{
		reachable = 0,
		unreachable = 1,
	};
}
