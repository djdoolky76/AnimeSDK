#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/PatrolMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCPatrol; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ADVNPCPATROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A4A10)
#define RPG_GAMECORE_ADVNPCPATROL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A4A20)
#define RPG_GAMECORE_ADVNPCPATROL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A49D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCPatrol_TypeDefinitionIndex = 19979;

	class AdvNPCPatrol : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::PatrolMode TaskMode; // 0x18
		::RPG::GameCore::CharacterMotionFlag DefaultMotionFlag; // 0x1C
		::System::Boolean StayOnWaypoint; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single StayOnWaypointDuration; // 0x24
		::System::String* StayOnWaypointDurationOverrideKey; // 0x28
		::RPG::GameCore::TaskConfig* OnWaypointTask; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::TaskConfig*>* PerWaypointTask; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterMotionFlag>* OverrideMotionFlag; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPATROL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCPatrol* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPATROL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCPatrol* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCPatrol*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCPATROL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
