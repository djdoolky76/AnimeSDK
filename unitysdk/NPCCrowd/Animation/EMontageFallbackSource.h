#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int EMontageFallbackSource_TypeDefinitionIndex = 92376;

	enum class EMontageFallbackSource : ::System::Int32
	{
		ExplicitRuntime = 40,
		DefaultState = 10,
		TraitAction = 20,
		TraitMontage = 30,
	};
}
