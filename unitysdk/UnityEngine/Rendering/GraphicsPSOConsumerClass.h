#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GraphicsPSOConsumerClass_TypeDefinitionIndex = 6217;

	enum class GraphicsPSOConsumerClass : ::System::Int32
	{
		Default = 0,
		CommandBuffer = 1,
		Fullscreen = 2,
		FinalOutput = 3,
		ClearByDraw = 4,
	};
}
