#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class DepthBits : ::System::Int32
	{
		None = 0,
		Depth8 = 8,
		Depth16 = 16,
		Depth24 = 24,
		Depth32 = 32,
	};
}
