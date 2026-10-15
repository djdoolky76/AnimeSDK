#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnFormulaActiveStateChangeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA160E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA160F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA160A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnFormulaActiveStateChangeConfig_TypeDefinitionIndex = 17980;

	class RogueModifierExecuteActionOnFormulaActiveStateChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaActiveStateChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAACTIVESTATECHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
