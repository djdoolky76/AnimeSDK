#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueGambleMachGroupConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC400)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC410)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueGambleMachGroupConfig_TypeDefinitionIndex = 17709;

	class RogueModifierReplaceContentRogueGambleMachGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueGambleMachGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEGAMBLEMACHGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
