#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class CommandBufferExecutionFlags : ::System::Int32
	{
		None = 0,
		AsyncCompute = 2,
	};
}
