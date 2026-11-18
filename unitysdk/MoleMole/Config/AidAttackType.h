#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AidAttackType_TypeDefinitionIndex = 76084;

	enum class AidAttackType : ::System::Int32
	{
		CommonAid = 0,
		ChainAid = 6,
		BeHitAid = 5,
		PowerStruggleAid = 8,
		ParryAid = 1,
		NoEnergyPerfectSwitchAid = 4,
		AssaultAid = 2,
		ZenkovPyroisBlinkAid = 7,
		EvadeAid = 3,
	};
}
