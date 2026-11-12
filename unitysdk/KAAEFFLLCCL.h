#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KAAEFFLLCCL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB53CC0)
#define KAAEFFLLCCL_GET_ACCUMULATEDBONUSSECONDS_OFFSET UNITYSDK_OFFSET(0xBB53A10)
#define KAAEFFLLCCL_GET_ACCUMULATEDFREEZESECONDS_OFFSET UNITYSDK_OFFSET(0xBB53A30)
#define KAAEFFLLCCL_GET_INITIALLEVELDURATIONSECONDS_OFFSET UNITYSDK_OFFSET(0xBB539F0)
#define KAAEFFLLCCL_GET_TIMEBONUSPERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xBB539D0)
#define KAAEFFLLCCL_HDAIGACPHKD_OFFSET UNITYSDK_OFFSET(0xBB53AA0)
#define KAAEFFLLCCL_IPNPLFGHGCO_OFFSET UNITYSDK_OFFSET(0xBB53C50)
#define KAAEFFLLCCL_LAEKCOLACCA_OFFSET UNITYSDK_OFFSET(0xBB53A50)
#define KAAEFFLLCCL_OJDHPLCBMNP_OFFSET UNITYSDK_OFFSET(0xBB53BE0)
#define KAAEFFLLCCL_PCIKAEMAAIP_OFFSET UNITYSDK_OFFSET(0xBB53B40)
#define KAAEFFLLCCL_SET_ACCUMULATEDBONUSSECONDS_OFFSET UNITYSDK_OFFSET(0xBB53A20)
#define KAAEFFLLCCL_SET_ACCUMULATEDFREEZESECONDS_OFFSET UNITYSDK_OFFSET(0xBB53A40)
#define KAAEFFLLCCL_SET_INITIALLEVELDURATIONSECONDS_OFFSET UNITYSDK_OFFSET(0xBB53A00)
#define KAAEFFLLCCL_SET_TIMEBONUSPERCUSTOMER_OFFSET UNITYSDK_OFFSET(0xBB539E0)

inline static constexpr unsigned int KAAEFFLLCCL_TypeDefinitionIndex = 79918;

	class KAAEFFLLCCL : public ::System::Object
	{
	public:
		::System::Single _AccumulatedBonusSeconds_k__BackingField; // 0x10
		::System::Single _AccumulatedFreezeSeconds_k__BackingField; // 0x14
		::System::Single _TimeBonusPerCustomer_k__BackingField; // 0x18
		::System::Single _InitialLevelDurationSeconds_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_CTOR_OFFSET))(this);
		}

		::System::Single get_TimeBonusPerCustomer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_GET_TIMEBONUSPERCUSTOMER_OFFSET))(this);
		}

		::System::Void set_TimeBonusPerCustomer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_SET_TIMEBONUSPERCUSTOMER_OFFSET))(this, a1);
		}

		::System::Single get_InitialLevelDurationSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_GET_INITIALLEVELDURATIONSECONDS_OFFSET))(this);
		}

		::System::Void set_InitialLevelDurationSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_SET_INITIALLEVELDURATIONSECONDS_OFFSET))(this, a1);
		}

		::System::Single get_AccumulatedBonusSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_GET_ACCUMULATEDBONUSSECONDS_OFFSET))(this);
		}

		::System::Void set_AccumulatedBonusSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_SET_ACCUMULATEDBONUSSECONDS_OFFSET))(this, a1);
		}

		::System::Single get_AccumulatedFreezeSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_GET_ACCUMULATEDFREEZESECONDS_OFFSET))(this);
		}

		::System::Void set_AccumulatedFreezeSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_SET_ACCUMULATEDFREEZESECONDS_OFFSET))(this, a1);
		}

		::System::Single LAEKCOLACCA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_LAEKCOLACCA_OFFSET))(this);
		}

		::System::Boolean HDAIGACPHKD(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_HDAIGACPHKD_OFFSET))(this, a1);
		}

		::System::Void PCIKAEMAAIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_PCIKAEMAAIP_OFFSET))(this, a1);
		}

		::System::Void OJDHPLCBMNP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_OJDHPLCBMNP_OFFSET))(this, a1);
		}

		::System::Void IPNPLFGHGCO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAAEFFLLCCL_IPNPLFGHGCO_OFFSET))(this, a1);
		}

	};
