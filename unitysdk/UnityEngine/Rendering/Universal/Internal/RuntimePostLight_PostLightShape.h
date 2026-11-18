#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int RuntimePostLight_PostLightShape_TypeDefinitionIndex = 26481;

	enum class RuntimePostLight_PostLightShape : ::System::Int32
	{
		OneSizeBox = 2,
		Sphere = 1,
		Box = 0,
	};
}
