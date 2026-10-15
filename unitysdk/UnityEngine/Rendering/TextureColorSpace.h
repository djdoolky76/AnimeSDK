#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class TextureColorSpace : ::System::Int32
	{
		kTexColorSpaceLinear = 0,
		kTexColorSpaceSRGB = 1,
	};
}
