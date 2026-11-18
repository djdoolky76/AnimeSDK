#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconMode_TypeDefinitionIndex = 11495;

	enum class EOptionIconMode : ::System::Int16
	{
		Add = 1,
		Replace = 2,
		EnumCount = 4,
		Single = 0,
		Reduce = 3,
	};
}
