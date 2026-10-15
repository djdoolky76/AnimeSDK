#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EffectScaleAdaptType : ::System::Int32
	{
		None = 0,
		AdaptBattleEffectInMaze = 1,
		AdaptBattleEffectInActivity = 2,
		AdaptAttachPoint = 3,
	};
}
