#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XeSSQualityMode_TypeDefinitionIndex = 6218;

	enum class XeSSQualityMode : ::System::Int32
	{
		Off = 0,
		UltraPerformance = 1,
		Performance = 2,
		Balanced = 3,
		Quality = 4,
		UltraQuality = 5,
		UltraQualityPlus = 6,
		NativeAA = 7,
		Count = 8,
	};
}
