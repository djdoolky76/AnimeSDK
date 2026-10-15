#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class ColorWriteMask : ::System::Int32
	{
		Alpha = 1,
		Blue = 2,
		Green = 4,
		Red = 8,
		All = 15,
	};
}
