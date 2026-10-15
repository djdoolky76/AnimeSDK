#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenGrowthPhaseRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D367540)
#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3672C0)

namespace RPG::GameCore
{
	class ActivityHipplenGrowthPhaseRow : public ::System::Object
	{
	public:
		::System::Single BodySize; // 0x10
		::System::UInt32 ID; // 0x14
		::System::Single SpeedRatioMultiplier; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PhaseTitle; // 0x20
		::RPG::Client::TextID PhaseTrialTitle; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenGrowthPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenGrowthPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
