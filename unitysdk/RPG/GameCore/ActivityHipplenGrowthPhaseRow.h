#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenGrowthPhaseRow; }

#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D339A70)
#define RPG_GAMECORE_ACTIVITYHIPPLENGROWTHPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3397F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGrowthPhaseRow_TypeDefinitionIndex = 11675;

	class ActivityHipplenGrowthPhaseRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID PhaseTitle; // 0x10
		::RPG::Client::TextID PhaseTrialTitle; // 0x20
		::System::Single SpeedRatioMultiplier; // 0x30
		::System::Single BodySize; // 0x34
		::System::UInt32 ID; // 0x38
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
