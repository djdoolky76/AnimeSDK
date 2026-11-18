#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderQueueType_TypeDefinitionIndex = 27126;

	enum class RenderQueueType : ::System::Int32
	{
		Transparent = 1,
		Opaque = 0,
	};
}
