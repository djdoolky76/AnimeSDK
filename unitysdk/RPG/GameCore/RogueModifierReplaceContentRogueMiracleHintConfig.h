#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueMiracleHintConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207A3E50)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207A3E60)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207A3E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueMiracleHintConfig_TypeDefinitionIndex = 17874;

	class RogueModifierReplaceContentRogueMiracleHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMiracleHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMIRACLEHINTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
