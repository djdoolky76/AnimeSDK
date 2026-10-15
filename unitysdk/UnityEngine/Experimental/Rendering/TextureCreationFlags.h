#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Experimental::Rendering
{
	enum class TextureCreationFlags : ::System::Int32
	{
		None = 0,
		MipChain = 1,
		Crunch = 64,
	};
}
