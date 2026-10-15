#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleAnimMoveOption_TypeDefinitionIndex = 24802;

	enum class RtBattleAnimMoveOption : ::System::UInt32
	{
		None = 0,
		IgnoreRadius = 1,
		IsBehindTarget = 2,
		TraceTargetPos = 4,
		CollisionStop = 8,
	};
}
