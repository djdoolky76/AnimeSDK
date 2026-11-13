#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthMaterialScope_TypeDefinitionIndex = 67519;

	enum class GrowthMaterialScope : ::System::UInt32
	{
		None = 0,
		AvatarProgression = 1,
		AvatarTraceTree = 2,
		LightConeProgression = 3,
	};
}
