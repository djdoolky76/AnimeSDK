#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCOfficerLineupPatrol; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4760)
#define RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A4770)
#define RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A4720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCOfficerLineupPatrol_TypeDefinitionIndex = 20001;

	class AdvNPCOfficerLineupPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean StayOnWaypoint; // 0x18
		::System::Boolean IsNeatlyPatrol; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single StayOnWaypointDuration; // 0x1C
		::RPG::GameCore::TaskConfig* OnWaypointTask; // 0x20
		::System::Single FallOutDistance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCOfficerLineupPatrol* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCOfficerLineupPatrol* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCOFFICERLINEUPPATROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
