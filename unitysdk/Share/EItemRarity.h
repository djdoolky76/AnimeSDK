#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EItemRarity_TypeDefinitionIndex = 10266;

	enum class EItemRarity : ::System::Int16
	{
		SR = 3,
		UR = 5,
		SSR = 4,
		N = 1,
		EnumCount = 6,
		R = 2,
	};
}
