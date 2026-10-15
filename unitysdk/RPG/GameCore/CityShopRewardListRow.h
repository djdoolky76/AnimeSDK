#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CityShopRewardListRow; }

#define RPG_GAMECORE_CITYSHOPREWARDLISTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B53A0)
#define RPG_GAMECORE_CITYSHOPREWARDLISTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B4CC0)

namespace RPG::GameCore
{
	class CityShopRewardListRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 ItemNeed; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 TotalItem; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CityShopRewardListRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CityShopRewardListRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPREWARDLISTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
