#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class HBFODNLIBFI;
class HBOCFEEEEII;
class IMFBPGDPEOI;

#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD8FF0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x1DBD8B70)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISREWARDDRAWN_OFFSET UNITYSDK_OFFSET(0x1DBD8A30)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DBD8810)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEDESCRIPTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DBD8AA0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_GET_PRIZEID_OFFSET UNITYSDK_OFFSET(0x1DBD88C0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISREWARDCLAIMED_OFFSET UNITYSDK_OFFSET(0x1DBD8BB0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DBD8850)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEDESCRIPTIONINDEX_OFFSET UNITYSDK_OFFSET(0x1DBD8AE0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SET_PRIZEID_OFFSET UNITYSDK_OFFSET(0x1DBD8900)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNCISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1DBD8C40)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1DBD8DB0)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_2_OFFSET UNITYSDK_OFFSET(0x1DBD8F30)
#define RPG_CLIENT_ACTIVITYBENEFITV2ROUND_SYNC_OFFSET UNITYSDK_OFFSET(0x1DBD8CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitV2Round_TypeDefinitionIndex = 62792;

	class ActivityBenefitV2Round : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Int32 _PrizeDescriptionIndex; // 0x18
		::System::Boolean _IsRewardClaimed; // 0x1C
		::System::Boolean _IsUnlocked; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 _PrizeID; // 0x20
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
