#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA158A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA158B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15860)

namespace RPG::GameCore
{
	class RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
