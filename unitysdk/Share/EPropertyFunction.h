#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPropertyFunction_TypeDefinitionIndex = 17667;

	enum class EPropertyFunction : ::System::Int32
	{
		Add = 2,
		EnumCount = 100,
		LimitMin = 97,
		InitMin = 98,
		InitMax = 99,
		Normal = 0,
		Hierarchy = 1,
	};
}
