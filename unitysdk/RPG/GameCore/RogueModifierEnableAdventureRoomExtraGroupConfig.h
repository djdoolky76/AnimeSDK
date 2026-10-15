#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierEnableAdventureRoomExtraGroupConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DDC30)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9DDC40)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9DDBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableAdventureRoomExtraGroupConfig_TypeDefinitionIndex = 17953;

	class RogueModifierEnableAdventureRoomExtraGroupConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierEnableAdventureRoomExtraGroupConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEADVENTUREROOMEXTRAGROUPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
