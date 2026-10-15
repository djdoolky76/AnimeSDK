#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameCoreParamFlag_TypeDefinitionIndex = 10505;

	enum class GameCoreParamFlag : ::System::UInt32
	{
		IsFakeAvatarAttack = 1,
		IsHPChangeByDamage = 2,
		IsRedStanceBreak = 4,
		IsReviveFromDied = 8,
		IsExtraStance = 16,
		CallBack_SettleSkillOrInsertAbility = 32,
		CallBackBefore_OnListenCharacterCreate = 64,
		CallBackBefore_MazeSkillEnterBattle = 128,
		CallBackAfter_MazeSkillEnterBattle = 256,
		CallBackBefore_OnListenBeforeSkillUse = 512,
		CallBackBefore_OnListenInsertAbilityStart = 1024,
		IsModifierAdding = 2048,
		MuteDispelVisualEffect = 4096,
		EnableEnergyPointModify = 8192,
	};
}
