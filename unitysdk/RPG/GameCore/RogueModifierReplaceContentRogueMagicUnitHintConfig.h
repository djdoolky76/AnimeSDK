#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueMagicUnitHintConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19DC0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19DD0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicUnitHintConfig_TypeDefinitionIndex = 17715;

	class RogueModifierReplaceContentRogueMagicUnitHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicUnitHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICUNITHINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
