#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SimulatingPlatform_TypeDefinitionIndex = 26324;

	enum class SimulatingPlatform : ::System::UInt32
	{
		IsMobile = 6,
		LowEndPlatform = 22,
		Any = 4294967295,
		HighEndPlatform = 41,
		IOS = 2,
		Android = 4,
		ConsolePlatform = 40,
		None = 0,
		Switch = 16,
		PC = 1,
		PS5 = 8,
		XBOX = 32,
	};
}
