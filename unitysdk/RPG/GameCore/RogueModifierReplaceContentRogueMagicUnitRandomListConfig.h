#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueMagicUnitRandomListConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC580)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC590)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicUnitRandomListConfig_TypeDefinitionIndex = 17714;

	class RogueModifierReplaceContentRogueMagicUnitRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITRANDOMLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
