#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData_ItemFlag.h"
#include "unitysdk/RPG/Client/UniqueItemKey.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class MKBLHJNNPEF;
class OKEFHOAGJGH;
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemComefromRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMDATA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CED9D60)
#define RPG_CLIENT_ITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED9C00)
#define RPG_CLIENT_ITEMDATA_GETCOMEFROM_OFFSET UNITYSDK_OFFSET(0x1CED9FE0)
#define RPG_CLIENT_ITEMDATA_GETFOODTYPEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEDA030)
#define RPG_CLIENT_ITEMDATA_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1CEDABD0)
#define RPG_CLIENT_ITEMDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1CEDA730)
#define RPG_CLIENT_ITEMDATA_GET_COUNTAFTERDELETE_OFFSET UNITYSDK_OFFSET(0x1CEDB1F0)
#define RPG_CLIENT_ITEMDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CEDB1A0)
#define RPG_CLIENT_ITEMDATA_GET_CUSTOMDATALIST_OFFSET UNITYSDK_OFFSET(0x1CEDB0D0)
#define RPG_CLIENT_ITEMDATA_GET_DELCOUNT_OFFSET UNITYSDK_OFFSET(0x1CEDB1D0)
#define RPG_CLIENT_ITEMDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CEDAB60)
#define RPG_CLIENT_ITEMDATA_GET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x1CEDB260)
#define RPG_CLIENT_ITEMDATA_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x1CEDB280)
#define RPG_CLIENT_ITEMDATA_GET_INVENTORYDISPLAYTAG_OFFSET UNITYSDK_OFFSET(0x1CEDA9B0)
#define RPG_CLIENT_ITEMDATA_GET_ISAUTOUSE_OFFSET UNITYSDK_OFFSET(0x1CEDB120)
#define RPG_CLIENT_ITEMDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1CEDB240)
#define RPG_CLIENT_ITEMDATA_GET_ISPILE_OFFSET UNITYSDK_OFFSET(0x1CEDA610)
#define RPG_CLIENT_ITEMDATA_GET_ISSELLABLE_OFFSET UNITYSDK_OFFSET(0x1CEDB370)
#define RPG_CLIENT_ITEMDATA_GET_ISSHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1CEDAFD0)
#define RPG_CLIENT_ITEMDATA_GET_ISUNIQUE_OFFSET UNITYSDK_OFFSET(0x1CEDA770)
#define RPG_CLIENT_ITEMDATA_GET_ISUSABLE_OFFSET UNITYSDK_OFFSET(0x1CEDB320)
#define RPG_CLIENT_ITEMDATA_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1CEDB2A0)
#define RPG_CLIENT_ITEMDATA_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CEDA850)
#define RPG_CLIENT_ITEMDATA_GET_ITEMAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEDAC40)
#define RPG_CLIENT_ITEMDATA_GET_ITEMBGDESC_OFFSET UNITYSDK_OFFSET(0x1CEDAD70)
#define RPG_CLIENT_ITEMDATA_GET_ITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEDAF10)
#define RPG_CLIENT_ITEMDATA_GET_ITEMDESC_OFFSET UNITYSDK_OFFSET(0x1CEDAD00)
#define RPG_CLIENT_ITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEDAEA0)
#define RPG_CLIENT_ITEMDATA_GET_ITEMGROUP_OFFSET UNITYSDK_OFFSET(0x1CEDB030)
#define RPG_CLIENT_ITEMDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x1CEDAE30)
#define RPG_CLIENT_ITEMDATA_GET_ITEMMAINTYPE_OFFSET UNITYSDK_OFFSET(0x1CEDA960)
#define RPG_CLIENT_ITEMDATA_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x1CEDAC90)
#define RPG_CLIENT_ITEMDATA_GET_ITEMRARITY_OFFSET UNITYSDK_OFFSET(0x1CEDAA50)
#define RPG_CLIENT_ITEMDATA_GET_ITEMSUBTYPE_OFFSET UNITYSDK_OFFSET(0x1CEDA160)
#define RPG_CLIENT_ITEMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CEDAAF0)
#define RPG_CLIENT_ITEMDATA_GET_PILELIMIT_OFFSET UNITYSDK_OFFSET(0x1CEDADE0)
#define RPG_CLIENT_ITEMDATA_GET_PLATFORMS_OFFSET UNITYSDK_OFFSET(0x1CEDB1C0)
#define RPG_CLIENT_ITEMDATA_GET_PURPOSETYPE_OFFSET UNITYSDK_OFFSET(0x1CEDAAA0)
#define RPG_CLIENT_ITEMDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1CEDAA00)
#define RPG_CLIENT_ITEMDATA_GET_RETURNITEMIDLIST_OFFSET UNITYSDK_OFFSET(0x1CEDAF80)
#define RPG_CLIENT_ITEMDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1CEDA710)
#define RPG_CLIENT_ITEMDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1CEDA6C0)
#define RPG_CLIENT_ITEMDATA_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1CEDA750)
#define RPG_CLIENT_ITEMDATA_GET_USEDATAID_OFFSET UNITYSDK_OFFSET(0x1CEDB080)
#define RPG_CLIENT_ITEMDATA_GET_USEMETHOD_OFFSET UNITYSDK_OFFSET(0x1CEDA800)
#define RPG_CLIENT_ITEMDATA_GET__VISIBLEPREDICATE_OFFSET UNITYSDK_OFFSET(0x1CEDA8C0)
#define RPG_CLIENT_ITEMDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1CEDA740)
#define RPG_CLIENT_ITEMDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CEDB1B0)
#define RPG_CLIENT_ITEMDATA_SET_DELCOUNT_OFFSET UNITYSDK_OFFSET(0x1CEDB1E0)
#define RPG_CLIENT_ITEMDATA_SET_EXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x1CEDB270)
#define RPG_CLIENT_ITEMDATA_SET_FLAG_OFFSET UNITYSDK_OFFSET(0x1CEDB290)
#define RPG_CLIENT_ITEMDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1CEDB250)
#define RPG_CLIENT_ITEMDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x1CEDA720)
#define RPG_CLIENT_ITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1CED9F80)
#define RPG_CLIENT_ITEMDATA_TRYCREATEITEMDATA_1_OFFSET UNITYSDK_OFFSET(0x1CED9C60)
#define RPG_CLIENT_ITEMDATA_TRYCREATEITEMDATA_OFFSET UNITYSDK_OFFSET(0x1CED9A90)
#define RPG_CLIENT_ITEMDATA__GETDEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1CEDA2A0)
#define RPG_CLIENT_ITEMDATA__GETGENDERCONFIG_OFFSET UNITYSDK_OFFSET(0x1CEDA1B0)
#define RPG_CLIENT_ITEMDATA__INITFLAGS_OFFSET UNITYSDK_OFFSET(0x1CED9EF0)
#define RPG_CLIENT_ITEMDATA__ISCONFIGIDVALID_OFFSET UNITYSDK_OFFSET(0x1CED9BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemData_TypeDefinitionIndex = 67633;

	class ItemData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Object*>* _Platforms_k__BackingField; // 0x10
		::RPG::GameCore::ItemRow* _Row_k__BackingField; // 0x18
		::System::UInt32 _Count_k__BackingField; // 0x20
		::System::Boolean IsFavorite; // 0x24
		::System::Boolean _IsNew_k__BackingField; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 _ConfigID_k__BackingField; // 0x28
		::System::Byte _padding1[0x4];
		::System::UInt64 _ExpiredTime_k__BackingField; // 0x30
		::RPG::Client::ItemData_ItemFlag _Flag_k__BackingField; // 0x38
		::System::UInt32 _DelCount_k__BackingField; // 0x3C
		::RPG::Client::UniqueItemKey _UniqueKey_k__BackingField; // 0x40
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::RPG::Client::UniqueItemKey a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_CTOR_1_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ItemData* TryCreateItemData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_TRYCREATEITEMDATA_OFFSET))(a1);
		}

		static ::RPG::Client::ItemData* TryCreateItemData_1(::System::UInt32 a1, ::RPG::Client::UniqueItemKey a2)
		{
			return ((::RPG::Client::ItemData*(*)(::System::UInt32, ::RPG::Client::UniqueItemKey))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_TRYCREATEITEMDATA_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsConfigIDValid(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__ISCONFIGIDVALID_OFFSET))(a1);
		}

		::System::Void Sync(::MKBLHJNNPEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKBLHJNNPEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemComefromRow*>* GetComeFrom()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemComefromRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GETCOMEFROM_OFFSET))(this);
		}

		::System::String* GetFoodTypeIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GETFOODTYPEICONPATH_OFFSET))(this);
		}

		::System::Void _InitFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__INITFLAGS_OFFSET))(this);
		}

		::OKEFHOAGJGH* _GetGenderConfig()
		{
			return ((::OKEFHOAGJGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__GETGENDERCONFIG_OFFSET))(this);
		}

		::System::String* _GetDebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA__GETDEBUGGERDISPLAY_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get_Row()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ItemRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_ROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_CONFIGID_OFFSET))(this, a1);
		}

		::RPG::Client::UniqueItemKey get_UniqueKey()
		{
			return ((::RPG::Client::UniqueItemKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_UNIQUEKEY_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_UID_OFFSET))(this);
		}

		::System::Boolean get_IsUnique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISUNIQUE_OFFSET))(this);
		}

		::System::Boolean get_IsPile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISPILE_OFFSET))(this);
		}

		::System::UInt32 get_UseMethod()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_USEMETHOD_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::GameCore::ItemMainType get_ItemMainType()
		{
			return ((::RPG::GameCore::ItemMainType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMMAINTYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemSubType get_ItemSubType()
		{
			return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMSUBTYPE_OFFSET))(this);
		}

		::System::UInt32 get_InventoryDisplayTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_INVENTORYDISPLAYTAG_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::GameCore::ItemRarity get_ItemRarity()
		{
			return ((::RPG::GameCore::ItemRarity(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMRARITY_OFFSET))(this);
		}

		::System::UInt32 get_PurposeType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_PURPOSETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_BGDESC_OFFSET))(this);
		}

		::System::String* get_ItemAvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMAVATARICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemBGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMBGDESC_OFFSET))(this);
		}

		::System::UInt32 get_PileLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_PILELIMIT_OFFSET))(this);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemCurrencyIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMCURRENCYICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_ReturnItemIDList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_RETURNITEMIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsShowRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISSHOWREDDOT_OFFSET))(this);
		}

		::System::UInt32 get_ItemGroup()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ITEMGROUP_OFFSET))(this);
		}

		::System::UInt32 get_UseDataID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_USEDATAID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CustomDataList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_CUSTOMDATALIST_OFFSET))(this);
		}

		::System::Boolean get_IsAutoUse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISAUTOUSE_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_COUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::Object*>* get_Platforms()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_PLATFORMS_OFFSET))(this);
		}

		::System::UInt32 get_DelCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_DELCOUNT_OFFSET))(this);
		}

		::System::Void set_DelCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_DELCOUNT_OFFSET))(this, a1);
		}

		::System::Int64 get_CountAfterDelete()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_COUNTAFTERDELETE_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::UInt64 get_ExpiredTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_EXPIREDTIME_OFFSET))(this);
		}

		::System::Void set_ExpiredTime(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_EXPIREDTIME_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData_ItemFlag get_Flag()
		{
			return ((::RPG::Client::ItemData_ItemFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_FLAG_OFFSET))(this);
		}

		::System::Void set_Flag(::RPG::Client::ItemData_ItemFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData_ItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_SET_FLAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVirtual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISVIRTUAL_OFFSET))(this);
		}

		::System::Boolean get_IsUsable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISUSABLE_OFFSET))(this);
		}

		::System::Boolean get_IsSellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET_ISSELLABLE_OFFSET))(this);
		}

		::System::Predicate_1<::System::UInt32>* get__VisiblePredicate()
		{
			return ((::System::Predicate_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDATA_GET__VISIBLEPREDICATE_OFFSET))(this);
		}

	};
}
