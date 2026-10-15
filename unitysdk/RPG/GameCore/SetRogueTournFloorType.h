#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetRogueTournFloorType; }

#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC0B10)
#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC0B20)
#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC0AE0)

namespace RPG::GameCore
{
	class SetRogueTournFloorType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueTournTitanFloorType FloorType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRogueTournFloorType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRogueTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetRogueTournFloorType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetRogueTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
