#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAffixLevel_TypeDefinitionIndex = 17645;

	enum class EAffixLevel : ::System::Int16
	{
		SSR = 3,
		SR = 2,
		R = 1,
		EnumCount = 4,
	};
}
