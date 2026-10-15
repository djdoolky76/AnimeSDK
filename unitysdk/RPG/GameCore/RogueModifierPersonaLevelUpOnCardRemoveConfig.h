#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaLevelUpOnCardRemoveConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EBA40)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EBA50)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EBA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaLevelUpOnCardRemoveConfig_TypeDefinitionIndex = 17877;

	class RogueModifierPersonaLevelUpOnCardRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaLevelUpOnCardRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONALEVELUPONCARDREMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
