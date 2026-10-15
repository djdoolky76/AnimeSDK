#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityActiveBenefitConfigRow; }

#define RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34D150)
#define RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34CFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityActiveBenefitConfigRow_TypeDefinitionIndex = 10898;

	class ActivityActiveBenefitConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 BenefitID; // 0x10
		::System::UInt32 ActiveItemNum; // 0x14
		::System::UInt32 Reward; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityActiveBenefitConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityActiveBenefitConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYACTIVEBENEFITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
