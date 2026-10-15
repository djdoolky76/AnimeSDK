#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFGIHHJGCFA;
namespace RPG::Client { class ActivityRewardCountItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC5A0550)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GETCOUNTBYITEMID_OFFSET UNITYSDK_OFFSET(0xC5A0970)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xC5A0A20)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ITEMCOUNTS_OFFSET UNITYSDK_OFFSET(0xC5A0A60)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC59FC00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountData_TypeDefinitionIndex = 61786;

	class ActivityRewardCountData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>* _ItemCounts; // 0x10
		::System::Collections::ObjectModel::ReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>* _ItemCounts_ReadOnly; // 0x18
		::System::UInt32 _ActivityID; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Sync(::EFGIHHJGCFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFGIHHJGCFA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityRewardCountItemData* GetCountByItemID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GETCOUNTBYITEMID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>* get_ItemCounts()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::ActivityRewardCountItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTDATA_GET_ITEMCOUNTS_OFFSET))(this);
		}

	};
}
