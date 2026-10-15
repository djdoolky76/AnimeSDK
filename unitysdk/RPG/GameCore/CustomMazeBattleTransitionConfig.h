#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CustomMazeBattleTransitionConfig; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BC1B0)
#define RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5BBF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomMazeBattleTransitionConfig_TypeDefinitionIndex = 17613;

	class CustomMazeBattleTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeforeTriggerBattle; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoopFadeOutBeforeBattle; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterBattleLoad; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRollbackAfterBattleLoad; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAfterTriggerBattle; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomMazeBattleTransitionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomMazeBattleTransitionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMMAZEBATTLETRANSITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
