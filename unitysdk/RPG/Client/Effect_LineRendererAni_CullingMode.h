#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class Effect_LineRendererAni_CullingMode : ::System::Int32
	{
		Pause = 0,
		AlwaysUpdate = 1,
		OnlyFirstUpdate = 2,
	};
}
