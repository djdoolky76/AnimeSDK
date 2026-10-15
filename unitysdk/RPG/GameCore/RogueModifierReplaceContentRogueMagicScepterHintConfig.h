#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueMagicScepterHintConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERHINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19D00)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERHINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19D10)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERHINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMagicScepterHintConfig_TypeDefinitionIndex = 17712;

	class RogueModifierReplaceContentRogueMagicScepterHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERHINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERHINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMagicScepterHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMAGICSCEPTERHINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
