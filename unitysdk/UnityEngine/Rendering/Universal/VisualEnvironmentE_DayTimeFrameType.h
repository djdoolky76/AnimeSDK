#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_DayTimeFrameType_TypeDefinitionIndex = 26360;

	enum class VisualEnvironmentE_DayTimeFrameType : ::System::Int32
	{
		Evening = 1,
		Day = 0,
		None = 4,
		Other = 3,
		Night = 2,
	};
}
