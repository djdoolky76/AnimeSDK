#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VolumetricCloudV2Quality_TypeDefinitionIndex = 26720;

	enum class VolumetricCloudV2Quality : ::System::Int32
	{
		Mobile = 5,
		Disabled = 0,
		Ultra = 4,
		Low = 1,
		Medium = 2,
		High = 3,
	};
}
