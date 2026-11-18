#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DownSampleLevel_TypeDefinitionIndex = 27255;

	enum class DownSampleLevel : ::System::Int32
	{
		None = 0,
		Eighth = 3,
		Half = 1,
		Quarter = 2,
	};
}
