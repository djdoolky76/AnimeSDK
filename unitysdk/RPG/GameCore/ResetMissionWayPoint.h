#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ResetMissionWayPoint; }

#define RPG_GAMECORE_RESETMISSIONWAYPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D98B4E0)
#define RPG_GAMECORE_RESETMISSIONWAYPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D98B4F0)
#define RPG_GAMECORE_RESETMISSIONWAYPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D98B4B0)

namespace RPG::GameCore
{
	class ResetMissionWayPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONWAYPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetMissionWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONWAYPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ResetMissionWayPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ResetMissionWayPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETMISSIONWAYPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
