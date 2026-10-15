#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueMagicScepterRandomListConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC4C0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC4D0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicScepterRandomListConfig_TypeDefinitionIndex = 17711;

	class RogueModifierReplaceContentRogueMagicScepterRandomListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterRandomListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERRANDOMLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
