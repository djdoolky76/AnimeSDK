#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class EffectMutexResult : ::System::Int32
	{
		None = 0,
		Default = 1,
		FadeOut = 2,
	};
}
