#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherMaterialTransitionType_TypeDefinitionIndex = 26522;

	enum class WeatherMaterialTransitionType : ::System::Int32
	{
		SpecialRed = 1,
		NoonFoggy = 0,
		None = 2,
	};
}
