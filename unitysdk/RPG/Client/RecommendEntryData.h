#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RechargeTabType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RecommendDisplayConfig; }
namespace System { class String; }

#define RPG_CLIENT_RECOMMENDENTRYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CA860)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xE8CA790)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0xE8CA7F0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_GOODSID_OFFSET UNITYSDK_OFFSET(0xE8CA770)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_HASDISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0xE8CA810)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_HIDEAFTERSELL_OFFSET UNITYSDK_OFFSET(0xE8CA670)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xE8CA610)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE8CA6B0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xE8CA750)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0xE8CA6F0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDERAFTERSELL_OFFSET UNITYSDK_OFFSET(0xE8CA650)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xE8CA630)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_RECHARGEBENEFITID_OFFSET UNITYSDK_OFFSET(0xE8CA7D0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xE8CA7B0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_SHOPID_OFFSET UNITYSDK_OFFSET(0xE8CA730)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_TABTYPE_OFFSET UNITYSDK_OFFSET(0xE8CA6D0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_TAGTEXT_OFFSET UNITYSDK_OFFSET(0xE8CA710)
#define RPG_CLIENT_RECOMMENDENTRYDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE8CA690)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xE8CA7A0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_DISPLAYCONFIG_OFFSET UNITYSDK_OFFSET(0xE8CA800)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_GOODSID_OFFSET UNITYSDK_OFFSET(0xE8CA780)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_HIDEAFTERSELL_OFFSET UNITYSDK_OFFSET(0xE8CA680)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xE8CA620)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xE8CA6C0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xE8CA760)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_NAMETEXT_OFFSET UNITYSDK_OFFSET(0xE8CA700)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDERAFTERSELL_OFFSET UNITYSDK_OFFSET(0xE8CA660)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0xE8CA640)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_RECHARGEBENEFITID_OFFSET UNITYSDK_OFFSET(0xE8CA7E0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0xE8CA7C0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_SHOPID_OFFSET UNITYSDK_OFFSET(0xE8CA740)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_TABTYPE_OFFSET UNITYSDK_OFFSET(0xE8CA6E0)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_TAGTEXT_OFFSET UNITYSDK_OFFSET(0xE8CA720)
#define RPG_CLIENT_RECOMMENDENTRYDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xE8CA6A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RecommendEntryData_TypeDefinitionIndex = 68740;

	class RecommendEntryData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _GoodsID_k__BackingField; // 0x10
		::System::String* _NameText_k__BackingField; // 0x18
		::System::String* _ImagePath_k__BackingField; // 0x20
		::RPG::Client::RecommendDisplayConfig* _DisplayConfig_k__BackingField; // 0x28
		::System::String* _TagText_k__BackingField; // 0x30
		::RPG::GameCore::RechargeTabType _TabType_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::System::UInt32 _ShopID_k__BackingField; // 0x40
		::System::Boolean _HideAfterSell_k__BackingField; // 0x44
		::System::Byte _padding0[0x3];
		::System::UInt32 _ActivityModuleID_k__BackingField; // 0x48
		::System::UInt32 _Order_k__BackingField; // 0x4C
		::System::UInt32 _Type_k__BackingField; // 0x50
		::System::UInt32 _Schedule_k__BackingField; // 0x54
		::System::UInt32 _OrderAfterSell_k__BackingField; // 0x58
		::System::UInt32 _RechargeBenefitID_k__BackingField; // 0x5C
		::System::UInt32 _ItemID_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrderAfterSell()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ORDERAFTERSELL_OFFSET))(this);
		}

		::System::Void set_OrderAfterSell(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ORDERAFTERSELL_OFFSET))(this, a1);
		}

		::System::Boolean get_HideAfterSell()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_HIDEAFTERSELL_OFFSET))(this);
		}

		::System::Void set_HideAfterSell(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_HIDEAFTERSELL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Type()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Void set_ImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_IMAGEPATH_OFFSET))(this, a1);
		}

		::RPG::GameCore::RechargeTabType get_TabType()
		{
			return ((::RPG::GameCore::RechargeTabType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_TABTYPE_OFFSET))(this);
		}

		::System::Void set_TabType(::RPG::GameCore::RechargeTabType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RechargeTabType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_TABTYPE_OFFSET))(this, a1);
		}

		::System::String* get_NameText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_NAMETEXT_OFFSET))(this);
		}

		::System::Void set_NameText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_NAMETEXT_OFFSET))(this, a1);
		}

		::System::String* get_TagText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_TAGTEXT_OFFSET))(this);
		}

		::System::Void set_TagText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_TAGTEXT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_SHOPID_OFFSET))(this);
		}

		::System::Void set_ShopID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_SHOPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ITEMID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_GoodsID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_GOODSID_OFFSET))(this);
		}

		::System::Void set_GoodsID(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_GOODSID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_ACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_ACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Schedule()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::Void set_Schedule(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_SCHEDULE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RechargeBenefitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_RECHARGEBENEFITID_OFFSET))(this);
		}

		::System::Void set_RechargeBenefitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_RECHARGEBENEFITID_OFFSET))(this, a1);
		}

		::RPG::Client::RecommendDisplayConfig* get_DisplayConfig()
		{
			return ((::RPG::Client::RecommendDisplayConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_DISPLAYCONFIG_OFFSET))(this);
		}

		::System::Void set_DisplayConfig(::RPG::Client::RecommendDisplayConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RecommendDisplayConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_SET_DISPLAYCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDisplayConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMENDENTRYDATA_GET_HASDISPLAYCONFIG_OFFSET))(this);
		}

	};
}
