#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMissionWayPoint; }

#define RPG_GAMECORE_SETMISSIONWAYPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9DB0)
#define RPG_GAMECORE_SETMISSIONWAYPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB9DC0)
#define RPG_GAMECORE_SETMISSIONWAYPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB9D80)

namespace RPG::GameCore
{
	class SetMissionWayPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Boolean OverideMissionWayPointType; // 0x1C
		::System::Byte _padding0[0x3];
		::RPG::GameCore::MissionWayPointType MissionWayPointType; // 0x20
		::System::Boolean OverideWayPointFloorID; // 0x24
		::System::Byte _padding1[0x3];
		::System::UInt32 WayPointFloorID; // 0x28
		::System::Boolean OverideWayPointGroupID; // 0x2C
		::System::Byte _padding2[0x3];
		::System::UInt32 WayPointGroupID; // 0x30
		::System::Boolean OverideWayPointEntityID; // 0x34
		::System::Byte _padding3[0x3];
		::System::UInt32 WayPointEntityID; // 0x38
		::System::Boolean OverideWayPointLittleGameEntityID; // 0x3C
		::System::Byte _padding4[0x3];
		::System::UInt32 WayPointLittleGameEntityID; // 0x40
		::System::Boolean OverideWayPointShowRangeMin; // 0x44
		::System::Byte _padding5[0x3];
		::System::Int32 WayPointShowRangeMin; // 0x48
		::System::Boolean OverideMapWaypointRange; // 0x4C
		::System::Byte _padding6[0x3];
		::System::Single MapWaypointRange; // 0x50
		::System::Boolean OverideFroceMapHint; // 0x54
		::System::Boolean FroceMapHint; // 0x55
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONWAYPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMissionWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONWAYPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMissionWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMISSIONWAYPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
