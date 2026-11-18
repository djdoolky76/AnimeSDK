#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemType_TypeDefinitionIndex = 14748;

	enum class EHollowSystemType : ::System::Int16
	{
		Curse = 3,
		Card = 1,
		HollowItem = 5,
		Bag = 4,
		EnumCount = 8,
		CurseInfo = 7,
		Menu = 2,
		HollowResultPage = 6,
	};
}
