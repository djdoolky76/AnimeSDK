#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum class TextureSizeMode : ::System::Int32
	{
		Explicit = 0,
		Scale = 1,
		Functor = 2,
	};
}
