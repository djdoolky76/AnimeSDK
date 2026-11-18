#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_FeatureToggleOptimizeOption_TypeDefinitionIndex = 27367;

	enum class LightOptimizeConfig_FeatureToggleOptimizeOption : ::System::Int32
	{
		None = 0,
		DiffuseOff = 4,
		SpecularOff = 2,
		ShadowOff = 1,
	};
}
