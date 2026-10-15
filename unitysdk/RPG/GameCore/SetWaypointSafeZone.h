#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetWaypointSafeZone; }

#define RPG_GAMECORE_SETWAYPOINTSAFEZONE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACA040)
#define RPG_GAMECORE_SETWAYPOINTSAFEZONE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DACA050)
#define RPG_GAMECORE_SETWAYPOINTSAFEZONE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACA000)

namespace RPG::GameCore
{
	class SetWaypointSafeZone : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsReset; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single MarginLeft; // 0x1C
		::System::Single MarginRight; // 0x20
		::System::Single MarginUp; // 0x24
		::System::Single MarginDown; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTSAFEZONE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetWaypointSafeZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetWaypointSafeZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTSAFEZONE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetWaypointSafeZone* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetWaypointSafeZone*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETWAYPOINTSAFEZONE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
