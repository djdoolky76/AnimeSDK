#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFindTrotterConfigRow; }

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E574060)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E573B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConfigRow_TypeDefinitionIndex = 11662;

	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Aim01; // 0x10
		::System::UInt32 ActivityModuleID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Result02; // 0x28
		::RPG::Client::TextID Result01; // 0x38
		::RPG::Client::TextID Aim02; // 0x48
		::RPG::Client::TextID Title; // 0x58
		::System::UInt32 MissionID; // 0x68
		::System::UInt32 ActivityID; // 0x6C
		::System::UInt32 Order; // 0x70
		::System::UInt32 FinishSubMissionID; // 0x74
		::System::UInt32 StartSubMissionID; // 0x78
		::System::UInt32 RewardQuestID; // 0x7C
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
