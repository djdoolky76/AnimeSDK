#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionOnPersonaStyleLevelUpConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E8F60)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E8F70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E8F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaStyleLevelUpConfig_TypeDefinitionIndex = 17851;

	class RogueModifierExecuteActionOnPersonaStyleLevelUpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaStyleLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONASTYLELEVELUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
