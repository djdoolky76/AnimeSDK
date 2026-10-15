#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_DeadLineState_TypeDefinitionIndex = 56062;

	enum class EvolveBuildGearManager_DeadLineState : ::System::Byte
	{
		Undefined = 0,
		Warning = 1,
		Safe = 2,
	};
}
