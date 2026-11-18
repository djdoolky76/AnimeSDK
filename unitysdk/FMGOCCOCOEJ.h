#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FMGOCCOCOEJ_TypeDefinitionIndex = 94290;

enum class FMGOCCOCOEJ : ::System::Int32
{
	OnEnterPreparation = 1,
	OnBeforeBeAttacked = 6,
	OnGameEnd = 13,
	OnAfterPropertyChange = 9,
	OnKillEnemy = 14,
	OnBeforeBattleStart = 18,
	OnCriticalHit = 15,
	OnBeforeDead = 20,
	OnEntityDead = 10,
	OnBattleEndSimulation = 11,
	OnBeforePropertyChange = 8,
	OnRunSkill = 3,
	OnAfterAttack = 5,
	OnRoundStart = 17,
	OnBeforeAttack = 4,
	OnAfterBeAttacked = 7,
	None = 0,
	OnBattleEndRealWorldTime = 12,
	OnBattleStart = 2,
	OnQuestConditionFailed = 21,
	OnPlayerHpChange = 16,
	OnCastSkill = 19,
};
