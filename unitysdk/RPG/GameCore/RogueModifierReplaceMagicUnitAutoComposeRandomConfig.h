#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceMagicUnitAutoComposeRandomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC880)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC890)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceMagicUnitAutoComposeRandomConfig_TypeDefinitionIndex = 17734;

	class RogueModifierReplaceMagicUnitAutoComposeRandomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
