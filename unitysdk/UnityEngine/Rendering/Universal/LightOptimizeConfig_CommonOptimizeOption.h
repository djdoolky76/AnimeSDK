#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_CommonOptimizeOption_TypeDefinitionIndex = 27366;

	enum class LightOptimizeConfig_CommonOptimizeOption : ::System::Int32
	{
		CullableBasedOnScreenCoverage = 1,
		CullableBasedDistance = 2,
		Uncullable = 0,
	};
}
