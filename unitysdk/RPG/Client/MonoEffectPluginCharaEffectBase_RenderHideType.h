#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonoEffectPluginCharaEffectBase_RenderHideType : ::System::Int32
	{
		OriginState = 0,
		HideState = 1,
		ShowState = 2,
		DontReset = 3,
	};
}
