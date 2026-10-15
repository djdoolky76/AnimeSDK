#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnPersonaStyleSelectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16860)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16870)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaStyleSelectConfig_TypeDefinitionIndex = 17876;

	class RogueModifierExecuteActionOnPersonaStyleSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLESELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
