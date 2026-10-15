#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueBuffHintConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19AC0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19AD0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueBuffHintConfig_TypeDefinitionIndex = 17700;

	class RogueModifierReplaceContentRogueBuffHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
