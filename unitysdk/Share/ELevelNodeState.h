#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ELevelNodeState_TypeDefinitionIndex = 11697;

	enum class ELevelNodeState : ::System::Int16
	{
		WaitingServer = 5,
		Running = 2,
		EnumCount = 6,
		Finish = 1,
		GiveUp = 3,
		RunningAndNotUnlockByServer = 4,
	};
}
