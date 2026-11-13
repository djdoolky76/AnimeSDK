#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_EvolveBuildSelectPriority_TypeDefinitionIndex = 57275;

	enum class EvolveBuildGearManager_EvolveBuildSelectPriority : ::System::Byte
	{
		Evolve = 5,
		Resonance = 4,
		Upgrade = 2,
		Normal = 1,
	};
}
