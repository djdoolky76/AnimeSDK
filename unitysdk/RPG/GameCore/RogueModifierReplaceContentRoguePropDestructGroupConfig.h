#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRoguePropDestructGroupConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A000)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A010)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRoguePropDestructGroupConfig_TypeDefinitionIndex = 17706;

	class RogueModifierReplaceContentRoguePropDestructGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRoguePropDestructGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEPROPDESTRUCTGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
