#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondTournRoomTypeConfig; }

#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2670)
#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2680)
#define RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2630)

namespace RPG::GameCore
{
	class RogueCondTournRoomTypeConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondTournRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondTournRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondTournRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondTournRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTOURNROOMTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
