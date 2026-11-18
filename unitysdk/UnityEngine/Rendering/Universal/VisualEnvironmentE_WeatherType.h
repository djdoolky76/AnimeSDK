#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_WeatherType_TypeDefinitionIndex = 26365;

	enum class VisualEnvironmentE_WeatherType : ::System::Int32
	{
		Tod_Dusk = 2,
		ZeroStage3 = 2,
		Evening_SunShine = 4,
		ThickCloudy = 2,
		ZeroStage2 = 1,
		Day_Rain = 3,
		Night_Rain = 11,
		Tod_Evening = 3,
		Day_SunShine = 0,
		Tod_Noon = 1,
		Evening_Fog = 5,
		Day_Fog = 1,
		Night_SunShine = 8,
		Tod_MidNight = 4,
		ZeroStage4 = 3,
		Tod_Morning = 0,
		ThickFog = 13,
		Evening_Rain = 7,
		Night_Fog = 9,
		ZeroStage1 = 0,
		Tod_Count = 6,
		Thunder = 12,
		Tod_Dawn = 5,
	};
}
