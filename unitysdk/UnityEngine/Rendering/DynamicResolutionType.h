#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DynamicResolutionType_TypeDefinitionIndex = 36413;

	enum class DynamicResolutionType : ::System::Byte
	{
		Software = 0,
		Hardware = 1,
	};
}
