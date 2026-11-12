#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyFormulaActivateConditionConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC29E80)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC29E90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC29E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyFormulaActivateConditionConfig_TypeDefinitionIndex = 17913;

	class RogueModifierModifyFormulaActivateConditionConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyFormulaActivateConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYFORMULAACTIVATECONDITIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
