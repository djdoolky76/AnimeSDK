#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnFormulaEventConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16140)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16150)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnFormulaEventConfig_TypeDefinitionIndex = 17790;

	class RogueModifierExecuteActionOnFormulaEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnFormulaEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONFORMULAEVENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
