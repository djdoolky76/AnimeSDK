#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESelectMode_TypeDefinitionIndex = 14415;

	enum class ESelectMode : ::System::Int16
	{
		NotByPremise = 1,
		EnumCount = 2,
		ByPremise = 0,
	};
}
