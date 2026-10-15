#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFindTrotterConfigRow; }

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D365730)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3651F0)

namespace RPG::GameCore
{
	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Aim02; // 0x10
		::RPG::Client::TextID Result01; // 0x20
		::RPG::Client::TextID Result02; // 0x30
		::System::UInt32 StartSubMissionID; // 0x40
		::System::UInt32 RewardQuestID; // 0x44
		::System::UInt32 ActivityID; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Title; // 0x50
		::System::UInt32 FinishSubMissionID; // 0x60
		::System::UInt32 ActivityModuleID; // 0x64
		::RPG::Client::TextID Aim01; // 0x68
		::System::UInt32 Order; // 0x78
		::System::UInt32 MissionID; // 0x7C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFindTrotterConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFindTrotterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
