#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnActiveFormulaCountConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA159C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA159D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnActiveFormulaCountConfig_TypeDefinitionIndex = 17981;

	class RogueModifierExecuteActionOnActiveFormulaCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnActiveFormulaCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONACTIVEFORMULACOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
