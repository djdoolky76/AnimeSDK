#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUnlockIDType_TypeDefinitionIndex = 14196;

	enum class EUnlockIDType : ::System::Int16
	{
		HollowCard = 1,
		HollowBuff = 2,
		Curse = 5,
		HollowEvent = 3,
		HollowItem = 4,
	};
}
