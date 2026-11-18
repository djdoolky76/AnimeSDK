#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterInteractiveObjectType_TypeDefinitionIndex = 26934;

	enum class WaterInteractiveObjectType : ::System::Int32
	{
		Count = 2,
		Dynamic = 0,
		StaticBoundary = 1,
	};
}
