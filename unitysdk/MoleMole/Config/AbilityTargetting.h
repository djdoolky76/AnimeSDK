#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilityTargetting_TypeDefinitionIndex = 61561;

	enum class AbilityTargetting : ::System::Int32
	{
		None = 90,
		LastLocalAvatarAttackTarget = 19,
		ActiveControlEntity = 38,
		AimTarget = 24,
		CoopTeamAvatarsExceptSelf = 32,
		Caster = 1,
		CasterAlliedNoNeedEnterBattle = 28,
		Buddy_Support = 23,
		NodePoint = 16,
		Buddy_Fight = 22,
		Custom = 99,
		TeamEntity = 13,
		TeamAvatarsAll = 31,
		LocalAvatarAttackTarget = 17,
		RecordEntityKey = 34,
		Self = 0,
		SavePoint = 15,
		SelfAttackTarget = 4,
		CasterAllied = 5,
		EnemyAlliedNoNeedEnterBattle = 30,
		QTETarget = 12,
		Target = 2,
		TeamAvatars = 10,
		NeverUse = 8,
		Buddy_Partner = 27,
		ZenkovPyrois = 37,
		LastAttacker = 40,
		EnemyAllied = 7,
		LocalAvatar = 3,
		TargetAllied = 6,
		Buddy = 11,
		CoopTeamAvatarsAllExceptSelf = 33,
		BuddyAllied = 20,
		TargetAlliedNoNeedEnterBattle = 29,
		Level = 18,
		MpNonAuthCustom = 42,
		MpCustom = 41,
		ZenkovYokais = 36,
		LocalControlZenkovYokai = 35,
		PartnerAvatars = 26,
		LastSelfAttackTarget = 21,
		Camera = 14,
		TeamAllied = 25,
		Other = 9,
	};
}
