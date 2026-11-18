#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightOptimizeConfig_LightGroundDiscardType_TypeDefinitionIndex = 27369;

	enum class LightOptimizeConfig_LightGroundDiscardType : ::System::Int32
	{
		UnderGroundLight = 1,
		Nothing = 0,
		UpGroundLight = 2,
	};
}
