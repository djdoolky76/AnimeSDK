#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityLocalLegendRewardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityLocalLegendRewardConfigRow; }

#define RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36A5D0)
#define RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36A430)

namespace RPG::GameCore
{
	class ActivityLocalLegendRewardConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityLocalLegendRewardType TaskType; // 0x10
		::System::Int32 Sort; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityLocalLegendRewardConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOCALLEGENDREWARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
