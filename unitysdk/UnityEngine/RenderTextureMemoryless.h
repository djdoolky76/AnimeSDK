#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class RenderTextureMemoryless : ::System::Int32
	{
		None = 0,
		Color = 1,
		Depth = 2,
		MSAA = 4,
	};
}
