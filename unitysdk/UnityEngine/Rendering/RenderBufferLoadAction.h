#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class RenderBufferLoadAction : ::System::Int32
	{
		Load = 0,
		Clear = 1,
		DontCare = 2,
	};
}
