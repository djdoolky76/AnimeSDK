#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class SpriteRenderDataMode : ::System::Int32
	{
		SpriteRenderDataModeAutoDetect = 0,
		SpriteRenderDataModeAtlas = 1,
		SpriteRenderDataModeNotAtlas = 2,
	};
}
