#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SoundEmitterType : ::System::Int32
	{
		Owner = 0,
		UniqueName = 1,
		LocalPlayer = 2,
		NPC = 3,
		Prop = 4,
		DefaultEmitter = 5,
		TargetEvaluator = 6,
	};
}
