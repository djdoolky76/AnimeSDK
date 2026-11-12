#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class ActivityReCollectionData; }
namespace RPG::Client { class ActivityReCollectionItemData; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class OptionExEidolonRewardItemInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCEE26A0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCEE1E90)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0xCEE2260)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETCURACTIVATINGDATA_OFFSET UNITYSDK_OFFSET(0xCEE20A0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETOPTIONALEIDOLONITEMINFOLISTBYGIFTITEM_OFFSET UNITYSDK_OFFSET(0xCEE1AF0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETOPTIONALEIDOLONITEMINFOLIST_OFFSET UNITYSDK_OFFSET(0xCEE1140)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETOPTIONALREWARDIDLIST_OFFSET UNITYSDK_OFFSET(0xCEE0E90)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETREWARDITEMLISTBYQUESTID_OFFSET UNITYSDK_OFFSET(0xCEE0AD0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GET_COLLECTIONDATALIST_OFFSET UNITYSDK_OFFSET(0xCEE2200)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCEE1E40)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_ISBETABRANCH_OFFSET UNITYSDK_OFFSET(0xCEE22D0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_ISOWNEXEIDOLON_OFFSET UNITYSDK_OFFSET(0xCEE0D00)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCEE1FD0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCEE1F90)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__BUILDOPTIONEXEIDOLONITEMINFOLIST_OFFSET UNITYSDK_OFFSET(0xCEE1280)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__GETAVATARIDEXEIDOLONIDBYITEM_OFFSET UNITYSDK_OFFSET(0xCEE1C30)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__GETREWARDIDLISTBYGIFTITEM_OFFSET UNITYSDK_OFFSET(0xCEE0F60)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__INITDATA_OFFSET UNITYSDK_OFFSET(0xCEE23F0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__ONSCHEDULECONFIGREFRESH_OFFSET UNITYSDK_OFFSET(0xCEE23A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityReCollectionModule_TypeDefinitionIndex = 63310;

	class ActivityReCollectionModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityReCollectionData*>* _CollectionDataList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>*>* _QuestIDToExEidolonRewardItemInfoCacheDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>*>* _GiftItemToExEidolonRewardItemInfoCacheDict; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* GetRewardItemListByQuestID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETREWARDITEMLISTBYQUESTID_OFFSET))(this, a1);
		}

		::System::Boolean IsOwnExEidolon(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_ISOWNEXEIDOLON_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetOptionalRewardIDList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETOPTIONALREWARDIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>* GetOptionalEidolonItemInfoList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETOPTIONALEIDOLONITEMINFOLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>* GetOptionalEidolonItemInfoListByGiftItem(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETOPTIONALEIDOLONITEMINFOLISTBYGIFTITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetRewardIDListByGiftItem(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__GETREWARDIDLISTBYGIFTITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>* _BuildOptionExEidolonItemInfoList(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OptionExEidolonRewardItemInfo*>*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__BUILDOPTIONEXEIDOLONITEMINFOLIST_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _GetAvatarIDExEidolonIDByItem(::RPG::Client::ItemData* a1)
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__GETAVATARIDEXEIDOLONIDBYITEM_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::RPG::Client::ActivityReCollectionData* GetCurActivatingData()
		{
			return ((::RPG::Client::ActivityReCollectionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETCURACTIVATINGDATA_OFFSET))(this);
		}

		::RPG::Client::ActivityReCollectionItemData* GetCollectionItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityReCollectionItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GETCOLLECTIONITEMDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsBetaBranch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_ISBETABRANCH_OFFSET))(this);
		}

		::System::Void _OnScheduleConfigRefresh(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__ONSCHEDULECONFIGREFRESH_OFFSET))(this, a1);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE__INITDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityReCollectionData*>* get_CollectionDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityReCollectionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONMODULE_GET_COLLECTIONDATALIST_OFFSET))(this);
		}

	};
}
