#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077D990)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077D9A0)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077D950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig_TypeDefinitionIndex = 17971;

	class RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
