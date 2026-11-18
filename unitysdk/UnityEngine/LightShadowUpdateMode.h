#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	inline static constexpr unsigned int LightShadowUpdateMode_TypeDefinitionIndex = 5211;

	enum class LightShadowUpdateMode : ::System::Int32
	{
		UpdateDynamicByDistance = 0,
		StaticlyCached = 1,
		UpdateDynamicAlways = 2,
		MovableLight = 3,
	};
}
