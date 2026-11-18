#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FrameGenOffMode_TypeDefinitionIndex = 6152;

	enum class FrameGenOffMode : ::System::Int32
	{
		Release = 0,
		Suspend = 1,
		Count = 2,
	};
}
