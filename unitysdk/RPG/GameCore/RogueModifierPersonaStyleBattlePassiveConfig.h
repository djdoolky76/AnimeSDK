#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaStyleBattlePassiveConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19760)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19770)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaStyleBattlePassiveConfig_TypeDefinitionIndex = 17763;

	class RogueModifierPersonaStyleBattlePassiveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaStyleBattlePassiveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONASTYLEBATTLEPASSIVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
