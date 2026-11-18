#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_TimeOfDay_TypeDefinitionIndex = 26358;

	enum class VisualEnvironmentE_TimeOfDay : ::System::Int32
	{
		Count = 6,
		Noon = 1,
		Morning = 0,
		InNight = 3,
		SunSet = 2,
		OutNight = 5,
		Night = 4,
	};
}
