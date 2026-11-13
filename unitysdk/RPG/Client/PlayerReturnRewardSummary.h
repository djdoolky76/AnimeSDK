#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_CTOR_OFFSET UNITYSDK_OFFSET(0x19BD6D60)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_HCOINCLAIMABLE_OFFSET UNITYSDK_OFFSET(0x19BD6D00)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_HCOINREMAINING_OFFSET UNITYSDK_OFFSET(0x19BD6CE0)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_HCOINTOTAL_OFFSET UNITYSDK_OFFSET(0x19BD6CC0)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_SPECIALTICKETREMAINING_OFFSET UNITYSDK_OFFSET(0x19BD6D40)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_SPECIALTICKETTOTAL_OFFSET UNITYSDK_OFFSET(0x19BD6D20)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_HCOINCLAIMABLE_OFFSET UNITYSDK_OFFSET(0x19BD6D10)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_HCOINREMAINING_OFFSET UNITYSDK_OFFSET(0x19BD6CF0)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_HCOINTOTAL_OFFSET UNITYSDK_OFFSET(0x19BD6CD0)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_SPECIALTICKETREMAINING_OFFSET UNITYSDK_OFFSET(0x19BD6D50)
#define RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_SPECIALTICKETTOTAL_OFFSET UNITYSDK_OFFSET(0x19BD6D30)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnRewardSummary_TypeDefinitionIndex = 63279;

	class PlayerReturnRewardSummary : public ::System::Object
	{
	public:
		::System::UInt32 _HcoinRemaining_k__BackingField; // 0x10
		::System::UInt32 _HcoinClaimable_k__BackingField; // 0x14
		::System::UInt32 _HcoinTotal_k__BackingField; // 0x18
		::System::UInt32 _SpecialTicketRemaining_k__BackingField; // 0x1C
		::System::UInt32 _SpecialTicketTotal_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_HcoinTotal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_HCOINTOTAL_OFFSET))(this);
		}

		::System::Void set_HcoinTotal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_HCOINTOTAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_HcoinRemaining()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_HCOINREMAINING_OFFSET))(this);
		}

		::System::Void set_HcoinRemaining(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_HCOINREMAINING_OFFSET))(this, a1);
		}

		::System::UInt32 get_HcoinClaimable()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_HCOINCLAIMABLE_OFFSET))(this);
		}

		::System::Void set_HcoinClaimable(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_HCOINCLAIMABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialTicketTotal()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_SPECIALTICKETTOTAL_OFFSET))(this);
		}

		::System::Void set_SpecialTicketTotal(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_SPECIALTICKETTOTAL_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpecialTicketRemaining()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_GET_SPECIALTICKETREMAINING_OFFSET))(this);
		}

		::System::Void set_SpecialTicketRemaining(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNREWARDSUMMARY_SET_SPECIALTICKETREMAINING_OFFSET))(this, a1);
		}

	};
}
