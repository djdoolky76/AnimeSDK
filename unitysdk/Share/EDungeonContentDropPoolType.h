#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EDungeonContentDropPoolType_TypeDefinitionIndex = 12943;

	enum class EDungeonContentDropPoolType : ::System::Byte
	{
		Blessing = 3,
		Curse = 4,
		HollowItem = 6,
		Card = 0,
		Arcana = 2,
		EnumCount = 7,
		Reward = 5,
		BaneCard = 1,
	};
}
