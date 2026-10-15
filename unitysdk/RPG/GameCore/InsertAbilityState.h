#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertAbilityState_TypeDefinitionIndex = 56227;

	enum class InsertAbilityState : ::System::Byte
	{
		WaitUse = 1,
		InsertAbilityWorking = 4,
		SelfDeathProcess = 8,
		AllFinish = 16,
		All = 255,
	};
}
