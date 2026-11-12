#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenGrowthPhaseRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E575E70)
#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E575BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGrowthPhaseRow_TypeDefinitionIndex = 11726;

	class ActivityHipplenGrowthPhaseRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PhaseTitle; // 0x10
		::System::Single BodySize; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Single SpeedRatioMultiplier; // 0x28
		::System::Byte _padding0[0x4];
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
