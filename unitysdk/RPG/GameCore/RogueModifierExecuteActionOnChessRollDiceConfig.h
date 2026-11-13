#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnChessRollDiceConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077E6C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077E6D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077E680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnChessRollDiceConfig_TypeDefinitionIndex = 18116;

	class RogueModifierExecuteActionOnChessRollDiceConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnChessRollDiceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCHESSROLLDICECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
