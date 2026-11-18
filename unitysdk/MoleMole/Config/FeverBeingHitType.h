#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverBeingHitType_TypeDefinitionIndex = 45939;

	enum class FeverBeingHitType : ::System::Int32
	{
		HitSkyFly = 4,
		HitGroundLight = 2,
		Shake = 1,
		HitGroundHeavy = 3,
		Mute = 0,
	};
}
