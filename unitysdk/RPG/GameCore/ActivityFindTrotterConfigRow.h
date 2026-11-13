#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFindTrotterConfigRow; }

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E514F20)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E5149E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConfigRow_TypeDefinitionIndex = 11662;

	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Aim01; // 0x10
		::System::UInt32 ActivityID; // 0x20
		::System::UInt32 RewardQuestID; // 0x24
		::System::UInt32 FinishSubMissionID; // 0x28
		::System::UInt32 StartSubMissionID; // 0x2C
		::System::UInt32 ActivityModuleID; // 0x30
		::System::UInt32 MissionID; // 0x34
		::RPG::Client::TextID Aim02; // 0x38
		::RPG::Client::TextID Title; // 0x48
		::RPG::Client::TextID Result01; // 0x58
		::System::UInt32 Order; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Result02; // 0x70
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
