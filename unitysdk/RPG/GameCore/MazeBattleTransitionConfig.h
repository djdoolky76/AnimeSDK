#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazeBattleTransitionConfig; }
namespace RPG::GameCore { class PostureTypeTasksConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D860030)
#define RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D85F980)

namespace RPG::GameCore
{
	class MazeBattleTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnBeforeTriggerBattle; // 0x10
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnLoopFadeOutBeforeBattle; // 0x18
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnAfterTriggerBattle; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeActivityTriggerBattle; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeActivityTriggerBattleFadeOut; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterActivityTriggerBattle; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeCocoonBattle; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterCocoonTriggerBattle; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeStoryTriggerBattle; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterStoryTriggerBattle; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeScreenFadeTriggerBattle; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterScreenFadeTriggerBattle; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBattleFinish; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeEnterRogueMap; // 0x78
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterEnterRogueMap; // 0x80
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeExitRogueMap; // 0x88
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterExitRogueMap; // 0x90
		::Il2CppArray<::RPG::GameCore::PostureTypeTasksConfig*>* OnBeforeTriggerBattleForAD; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MazeBattleTransitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MazeBattleTransitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEBATTLETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
