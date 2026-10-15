#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class StripPlatform : ::System::Int32
	{
		None = 0,
		PC = 1,
		iOS = 2,
		Android = 4,
		PS5 = 8,
	};
}
