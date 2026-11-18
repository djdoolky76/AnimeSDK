#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WeatherType_TypeDefinitionIndex = 52193;

	enum class WeatherType : ::System::Int32
	{
		None = -1,
		SunShine = 0,
		Cloudy = 2,
		ThickCloudy = 6,
		Rain = 3,
		Fog = 1,
		ThickFog = 5,
		Thunder = 4,
	};
}
