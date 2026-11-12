#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class HBFODNLIBFI;
class HBOCFEEEEII;
class IMFBPGDPEOI;

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_CTOR_OFFSET UNITYSDK_OFFSET(0xCD16850)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0xCD163D0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDDRAWN_OFFSET UNITYSDK_OFFSET(0xCD16290)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCD16070)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEDESCRIPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xCD16300)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEID_OFFSET UNITYSDK_OFFSET(0xCD16120)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0xCD16410)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCD160B0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEDESCRIPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xCD16340)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEID_OFFSET UNITYSDK_OFFSET(0xCD16160)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNCISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xCD164A0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_1_OFFSET UNITYSDK_OFFSET(0xCD16610)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_2_OFFSET UNITYSDK_OFFSET(0xCD16790)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_OFFSET UNITYSDK_OFFSET(0xCD16530)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2Round_TypeDefinitionIndex = 62792;

	class ActivityBenefitV2Round : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::UInt32 _PrizeID; // 0x18
		::System::Boolean _IsUnlocked; // 0x1C
		::System::Boolean _IsRewardClaimed; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Int32 _PrizeDescriptionIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PrizeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEID_OFFSET))(this);
		}

		::System::Void set_PrizeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardDrawn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDDRAWN_OFFSET))(this);
		}

		::System::Int32 get_PrizeDescriptionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEDESCRIPTIONINDEX_OFFSET))(this);
		}

		::System::Void set_PrizeDescriptionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEDESCRIPTIONINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRewardClaimed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDCLAIMED_OFFSET))(this);
		}

		::System::Void set_IsRewardClaimed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISREWARDCLAIMED_OFFSET))(this, a1);
		}

		::System::Void SyncIsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNCISUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void Sync(::IMFBPGDPEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMFBPGDPEOI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::HBFODNLIBFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFODNLIBFI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::HBOCFEEEEII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBOCFEEEEII*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_2_OFFSET))(this, a1);
		}

	};
}
