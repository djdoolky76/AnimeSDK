#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueChestGroupListConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9EC280)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9EC290)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9EC240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueChestGroupListConfig_TypeDefinitionIndex = 17710;

	class RogueModifierReplaceContentRogueChestGroupListConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
