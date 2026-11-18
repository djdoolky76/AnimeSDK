#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EChallengeType_TypeDefinitionIndex = 12414;

	enum class EChallengeType : ::System::Int16
	{
		Dodge = 2,
		LimitBattle = 10,
		AttackCount = 6,
		QTECount = 7,
		BattleTime = 1,
		KillCount = 4,
		ContinusKill = 8,
		BackAttackCount = 9,
		BeHitCount = 5,
		HurtHPPercent = 11,
		Damage = 3,
	};
}
