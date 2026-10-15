#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class CombatPerformanceEventType : ::System::Byte
	{
		AttackerCutin = 0,
		AttackerCutinAnimation = 1,
		TriggerAttackEffect = 2,
		AttackerCutout = 3,
		IgnoreDefendPoint = 4,
		AttackDamage = 5,
		DirectDamage = 6,
		Heal = 7,
		AddModifier = 8,
		RemoveModifier = 9,
		UpdateModifier = 10,
		UpdateProperty_HP = 11,
		UpdateProperty_Atk = 12,
		UpdateProperty_Def = 13,
		TriggerCustomEffect = 14,
		TriggerSkillCutin = 15,
		TriggerSkillHint = 16,
		TriggerBossSpecialEffect = 17,
		TriggerSpecialHint = 18,
		IceEffect = 19,
		UpdateWeather = 20,
		DiceUpgrade = 21,
		BeforeCombatEffect = 22,
		CardCutin = 23,
		ChangeChallengerTeamActionEntity = 24,
		AfterCombatEffect = 25,
		ChallengerRevival = 26,
		BossChangePhase = 27,
		GainTacticsPoint = 28,
		AlignAttack = 29,
		AlignDefend = 30,
		Count = 31,
	};
}
