#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_ResolutionOption_TypeDefinitionIndex = 26357;

	enum class VisualEnvironmentE_ResolutionOption : ::System::Int32
	{
		Medium = 512,
		Low = 256,
		High = 1024,
		Ultra = 2048,
	};
}
