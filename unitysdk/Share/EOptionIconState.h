#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconState_TypeDefinitionIndex = 12899;

	enum class EOptionIconState : ::System::Int16
	{
		Add = 1,
		EnumCount = 4,
		None = 0,
		Reduce = 3,
		Replace = 2,
	};
}
