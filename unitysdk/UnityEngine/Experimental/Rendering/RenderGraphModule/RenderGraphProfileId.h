#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum class RenderGraphProfileId : ::System::Int32
	{
		RenderGraphClear = 0,
		RenderGraphClearDebug = 1,
	};
}
