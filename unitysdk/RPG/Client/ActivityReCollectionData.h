#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ActivityReCollectionData; }
namespace RPG::Client { class ActivityReCollectionItemData; }
namespace RPG::GameCore { class ActivityReCollectionConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C8BE260)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BE2E0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GETCOLLECTIONITEMDATA_OFFSET UNITYSDK_OFFSET(0x1C8BE5F0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GETLASTENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C8BEAD0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_DATALIST_OFFSET UNITYSDK_OFFSET(0x1C8BE480)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C8BF190)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C8BF080)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C8BF0A0)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C8BF120)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_ISACTIVATING_OFFSET UNITYSDK_OFFSET(0x1C8BE320)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C8BF090)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_SORTLIST_OFFSET UNITYSDK_OFFSET(0x1C8BE740)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0x1C8BED50)
#define RPG_CLIENT_ACTIVITYRECOLLECTIONDATA__SORTLIST_OFFSET UNITYSDK_OFFSET(0x1C8BE790)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityReCollectionData_TypeDefinitionIndex = 63306;

	class ActivityReCollectionData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityReCollectionConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityReCollectionItemData*>* _DataList; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityReCollectionData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityReCollectionData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsActivating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_ISACTIVATING_OFFSET))(this);
		}

		::RPG::Client::ActivityReCollectionItemData* GetCollectionItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityReCollectionItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GETCOLLECTIONITEMDATA_OFFSET))(this, a1);
		}

		::System::Void SortList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_SORTLIST_OFFSET))(this);
		}

		::System::Int64 GetLastEndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GETLASTENDTIMESTAMP_OFFSET))(this);
		}

		::System::Void _InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA__INITDATA_OFFSET))(this);
		}

		::System::Void _SortList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA__SORTLIST_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_PREFABPATH_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityReCollectionItemData*>* get_DataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityReCollectionItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYRECOLLECTIONDATA_GET_DATALIST_OFFSET))(this);
		}

	};
}
