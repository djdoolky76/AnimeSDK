#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUIType_TypeDefinitionIndex = 15419;

	enum class EUIType : ::System::Int16
	{
		HollowQuest = 2,
		Default = 0,
		Archive = 3,
		None = 1,
		EnumCount = 4,
	};
}
