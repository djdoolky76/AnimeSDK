#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierFormulaForceEnableConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16E60)
#define RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16E70)
#define RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierFormulaForceEnableConfig_TypeDefinitionIndex = 17989;

	class RogueModifierFormulaForceEnableConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierFormulaForceEnableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORMULAFORCEENABLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
