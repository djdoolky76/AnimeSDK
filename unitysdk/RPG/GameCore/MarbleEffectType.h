#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MarbleEffectType : ::System::Int32
	{
		Effect = 0,
		TimeSlow = 1,
		CameraShake = 2,
		RemoveEffect = 3,
	};
}
