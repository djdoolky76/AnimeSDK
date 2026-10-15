#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnBattleCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15AE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15AF0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnBattleCountConfig_TypeDefinitionIndex = 17985;

	class RogueModifierExecuteActionOnBattleCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnBattleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONBATTLECOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
