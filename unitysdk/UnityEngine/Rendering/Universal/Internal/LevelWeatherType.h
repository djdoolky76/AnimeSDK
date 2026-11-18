#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LevelWeatherType_TypeDefinitionIndex = 26688;

	enum class LevelWeatherType : ::System::Int32
	{
		Zero = 2,
		WeatherSystemV2 = 3,
		MainCity_DayAndNight = 1,
		CommonBattle = 0,
	};
}
