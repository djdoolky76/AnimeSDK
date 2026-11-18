#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController_EState_TypeDefinitionIndex = 49982;

	enum class UIFishContestMainPageController_EState : ::System::Int32
	{
		FishQTE = 2,
		BattleLoop = 3,
		StartFish = 1,
		WaitFish = 0,
	};
}
