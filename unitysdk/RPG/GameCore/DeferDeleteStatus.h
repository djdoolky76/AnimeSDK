#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DeferDeleteStatus : ::System::Byte
	{
		None = 0,
		LimboFinish = 1,
		DieAnimationFinish = 2,
		ProjectileFinish = 4,
		DeathrattleFinish = 8,
		DestroyWaitFinish = 16,
		AllFinish = 31,
	};
}
