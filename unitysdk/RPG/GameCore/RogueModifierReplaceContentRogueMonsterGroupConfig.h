#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueMonsterGroupConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19F40)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19F50)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19F00)

namespace RPG::GameCore
{
	class RogueModifierReplaceContentRogueMonsterGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueMonsterGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEMONSTERGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
