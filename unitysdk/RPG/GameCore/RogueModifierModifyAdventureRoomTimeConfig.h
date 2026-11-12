#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyAdventureRoomTimeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC296C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC296D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC29680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyAdventureRoomTimeConfig_TypeDefinitionIndex = 18137;

	class RogueModifierModifyAdventureRoomTimeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyAdventureRoomTimeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYADVENTUREROOMTIMECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
