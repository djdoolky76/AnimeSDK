#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;
namespace RPG::Client { class ActivityRewardCountItemData; }
namespace RPG::Client { class ItemData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CREATEBYITEMHELPER_OFFSET UNITYSDK_OFFSET(0xCEF5FF0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCEF6430)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCEF65A0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xCEF6770)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0xCEF64E0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xCEF5FA0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xCEF64A0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_LEFT_OFFSET UNITYSDK_OFFSET(0xCEF6620)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_MAX_OFFSET UNITYSDK_OFFSET(0xCEF65E0)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCEF6670)
#define RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xCEF6110)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityRewardCountItemData_TypeDefinitionIndex = 63196;

	class ActivityRewardCountItemData : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* _Item; // 0x10
		::System::UInt32 _Current; // 0x18
		::System::UInt32 _Max; // 0x1C
		::System::Void _ctor(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityRewardCountItemData* CreateByItemHelper(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityRewardCountItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_CREATEBYITEMHELPER_OFFSET))(a1);
		}

		::System::Void Sync(::BOMPFHOMMBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMPFHOMMBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* get_Item()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEM_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_CURRENT_OFFSET))(this);
		}

		::System::UInt32 get_Max()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_MAX_OFFSET))(this);
		}

		::System::UInt32 get_Left()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_LEFT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_PROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYREWARDCOUNTITEMDATA_GET_ISFULL_OFFSET))(this);
		}

	};
}
