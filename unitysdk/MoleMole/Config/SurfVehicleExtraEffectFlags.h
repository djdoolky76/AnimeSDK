#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfVehicleExtraEffectFlags_TypeDefinitionIndex = 84336;

	enum class SurfVehicleExtraEffectFlags : ::System::Int32
	{
		BuffProlong = 2,
		DebuffImmune = 1,
		None = 0,
	};
}
