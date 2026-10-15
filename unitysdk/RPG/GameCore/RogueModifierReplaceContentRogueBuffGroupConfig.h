#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueBuffGroupConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19A60)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19A70)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19A20)

namespace RPG::GameCore
{
	class RogueModifierReplaceContentRogueBuffGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
