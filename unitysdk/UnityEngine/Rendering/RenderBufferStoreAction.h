#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class RenderBufferStoreAction : ::System::Int32
	{
		Store = 0,
		Resolve = 1,
		StoreAndResolve = 2,
		DontCare = 3,
	};
}
