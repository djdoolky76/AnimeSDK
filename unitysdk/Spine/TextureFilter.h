#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	enum class TextureFilter : ::System::Int32
	{
		Nearest = 0,
		Linear = 1,
		MipMap = 2,
		MipMapNearestNearest = 3,
		MipMapLinearNearest = 4,
		MipMapNearestLinear = 5,
		MipMapLinearLinear = 6,
	};
}
