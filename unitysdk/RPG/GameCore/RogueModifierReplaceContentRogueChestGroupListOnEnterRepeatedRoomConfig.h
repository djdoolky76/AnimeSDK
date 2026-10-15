#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19B80)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19B90)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig_TypeDefinitionIndex = 17762;

	class RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierReplaceContentRogueChestGroupListOnEnterRepeatedRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUECHESTGROUPLISTONENTERREPEATEDROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
