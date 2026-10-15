#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionAfterRogueBattleConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA156C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA156D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterRogueBattleConfig_TypeDefinitionIndex = 17943;

	class RogueModifierExecuteActionAfterRogueBattleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUEBATTLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
