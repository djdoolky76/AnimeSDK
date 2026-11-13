#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertDeviceAbilityKey_TypeDefinitionIndex = 11217;

	enum class ComicDessertDeviceAbilityKey : ::System::Int32
	{
		None = 0,
		AutoActivate = 1,
		AutoEmit = 2,
		AutoStir = 3,
		AutoStart = 4,
		AutoRestock = 5,
		StirSeconds = 6,
		BakeSeconds = 7,
		ProduceCount = 8,
		RestockSteps = 9,
		CatOrderIntervalSeconds = 10,
		CatOrderFreezeSeconds = 11,
		CatOrderDishID = 12,
	};
}
