#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class DrawRendererFlags : ::System::Int32
	{
		None = 0,
		EnableDynamicBatching = 1,
		EnableInstancing = 2,
	};
}
