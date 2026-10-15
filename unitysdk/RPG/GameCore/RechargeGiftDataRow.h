#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeGiftDataRow; }

#define RPG_GAMECORE_RECHARGEGIFTDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D972530)
#define RPG_GAMECORE_RECHARGEGIFTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D972330)

namespace RPG::GameCore
{
	class RechargeGiftDataRow : public ::System::Object
	{
	public:
		::System::UInt32 GiftID; // 0x10
		::System::UInt32 Days; // 0x14
		::System::UInt32 RewardsPay; // 0x18
		::System::UInt32 McoinFree; // 0x1C
		::System::UInt32 RewardsFree; // 0x20
		::System::UInt32 McoinPay; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RechargeGiftDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RechargeGiftDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
