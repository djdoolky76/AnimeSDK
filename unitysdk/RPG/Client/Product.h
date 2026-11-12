#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMBPFFMCJDF.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"
namespace HoudiniEngineUnity { class JSONObject; }
namespace RPG::GameCore { class RechargeConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PRODUCT_CTOR_OFFSET UNITYSDK_OFFSET(0xE6A7CE0)
#define RPG_CLIENT_PRODUCT_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xE6A79A0)
#define RPG_CLIENT_PRODUCT_GET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0xE6A7960)
#define RPG_CLIENT_PRODUCT_GET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xE6A7690)
#define RPG_CLIENT_PRODUCT_GET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0xE6A76B0)
#define RPG_CLIENT_PRODUCT_GET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0xE6A76D0)
#define RPG_CLIENT_PRODUCT_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xE6A79C0)
#define RPG_CLIENT_PRODUCT_GET_GIFTVERSION_OFFSET UNITYSDK_OFFSET(0xE6A7940)
#define RPG_CLIENT_PRODUCT_GET_ISBP_OFFSET UNITYSDK_OFFSET(0xE6A7C90)
#define RPG_CLIENT_PRODUCT_GET_ISFIRSTRECHARGE_OFFSET UNITYSDK_OFFSET(0xE6A7C70)
#define RPG_CLIENT_PRODUCT_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE6A79E0)
#define RPG_CLIENT_PRODUCT_GET_ISSOLDOUT_OFFSET UNITYSDK_OFFSET(0xE6A7C10)
#define RPG_CLIENT_PRODUCT_GET_LOCALIZEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE6A76F0)
#define RPG_CLIENT_PRODUCT_GET_LOCALIZEDTITLE_OFFSET UNITYSDK_OFFSET(0xE6A7710)
#define RPG_CLIENT_PRODUCT_GET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0xE6A7980)
#define RPG_CLIENT_PRODUCT_GET_PRICETIER_OFFSET UNITYSDK_OFFSET(0xE6A7600)
#define RPG_CLIENT_PRODUCT_GET_PRICE_OFFSET UNITYSDK_OFFSET(0xE6A7900)
#define RPG_CLIENT_PRODUCT_GET_PRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0xE6A7920)
#define RPG_CLIENT_PRODUCT_GET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xE6A75E0)
#define RPG_CLIENT_PRODUCT_GET_ROW_OFFSET UNITYSDK_OFFSET(0xE6A7880)
#define RPG_CLIENT_PRODUCT_GET_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0xE6A78E0)
#define RPG_CLIENT_PRODUCT_SETBUYTIMES_OFFSET UNITYSDK_OFFSET(0xE6A7DD0)
#define RPG_CLIENT_PRODUCT_SETPRODUCT_OFFSET UNITYSDK_OFFSET(0xE6A7CF0)
#define RPG_CLIENT_PRODUCT_SETSCHEDULE_OFFSET UNITYSDK_OFFSET(0xE6A7E30)
#define RPG_CLIENT_PRODUCT_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xE6A79B0)
#define RPG_CLIENT_PRODUCT_SET_BUYTIMES_OFFSET UNITYSDK_OFFSET(0xE6A7970)
#define RPG_CLIENT_PRODUCT_SET_COUNTRYCODE_OFFSET UNITYSDK_OFFSET(0xE6A76A0)
#define RPG_CLIENT_PRODUCT_SET_CURRENCYCODE_OFFSET UNITYSDK_OFFSET(0xE6A76C0)
#define RPG_CLIENT_PRODUCT_SET_CURRENCYSYMBOL_OFFSET UNITYSDK_OFFSET(0xE6A76E0)
#define RPG_CLIENT_PRODUCT_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xE6A79D0)
#define RPG_CLIENT_PRODUCT_SET_GIFTVERSION_OFFSET UNITYSDK_OFFSET(0xE6A7950)
#define RPG_CLIENT_PRODUCT_SET_ISFIRSTRECHARGE_OFFSET UNITYSDK_OFFSET(0xE6A7C80)
#define RPG_CLIENT_PRODUCT_SET_LOCALIZEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE6A7700)
#define RPG_CLIENT_PRODUCT_SET_MAXBUYTIMES_OFFSET UNITYSDK_OFFSET(0xE6A7990)
#define RPG_CLIENT_PRODUCT_SET_PRICETIER_OFFSET UNITYSDK_OFFSET(0xE6A7640)
#define RPG_CLIENT_PRODUCT_SET_PRICE_OFFSET UNITYSDK_OFFSET(0xE6A7910)
#define RPG_CLIENT_PRODUCT_SET_PRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0xE6A7930)
#define RPG_CLIENT_PRODUCT_SET_PRODUCTID_OFFSET UNITYSDK_OFFSET(0xE6A75F0)
#define RPG_CLIENT_PRODUCT_SET_SHOWPRICE_OFFSET UNITYSDK_OFFSET(0xE6A78F0)
#define RPG_CLIENT_PRODUCT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE6A8BE0)
#define RPG_CLIENT_PRODUCT_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0xE6A7F70)

namespace RPG::Client
{
	inline static constexpr unsigned int Product_TypeDefinitionIndex = 68378;

	class Product : public ::System::Object
	{
	public:
		::System::String* _CurrencyCode_k__BackingField; // 0x10
		::System::String* _CurrencySymbol_k__BackingField; // 0x18
		::System::String* _ShowPrice_k__BackingField; // 0x20
		::System::String* _CountryCode_k__BackingField; // 0x28
		::System::String* _LocalizedDescription_k__BackingField; // 0x30
		::System::String* _ProductID_k__BackingField; // 0x38
		::System::String* _PriceTier; // 0x40
		::System::UInt32 _BuyTimes_k__BackingField; // 0x48
		::System::UInt32 _MaxBuyTimes_k__BackingField; // 0x4C
		::IMBPFFMCJDF _ProductGiftType_k__BackingField; // 0x50
		::System::Boolean _IsFirstRecharge_k__BackingField; // 0x54
		::System::Byte _padding0[0x3];
		::System::Single _Price_k__BackingField; // 0x58
		::System::UInt32 _GiftVersion_k__BackingField; // 0x5C
		::RPG::Client::DateTimePro _EndTime_k__BackingField; // 0x60
		::RPG::Client::DateTimePro _BeginTime_k__BackingField; // 0x68
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::IMBPFFMCJDF a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::IMBPFFMCJDF, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* get_ProductID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRODUCTID_OFFSET))(this);
		}

		::System::Void set_ProductID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRODUCTID_OFFSET))(this, a1);
		}

		::System::String* get_PriceTier()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRICETIER_OFFSET))(this);
		}

		::System::Void set_PriceTier(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRICETIER_OFFSET))(this, a1);
		}

		::System::String* get_CountryCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_COUNTRYCODE_OFFSET))(this);
		}

		::System::Void set_CountryCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_COUNTRYCODE_OFFSET))(this, a1);
		}

		::System::String* get_CurrencyCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_CURRENCYCODE_OFFSET))(this);
		}

		::System::Void set_CurrencyCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_CURRENCYCODE_OFFSET))(this, a1);
		}

		::System::String* get_CurrencySymbol()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_CURRENCYSYMBOL_OFFSET))(this);
		}

		::System::Void set_CurrencySymbol(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_CURRENCYSYMBOL_OFFSET))(this, a1);
		}

		::System::String* get_LocalizedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_LOCALIZEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LocalizedDescription(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_LOCALIZEDDESCRIPTION_OFFSET))(this, a1);
		}

		::System::String* get_LocalizedTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_LOCALIZEDTITLE_OFFSET))(this);
		}

		::System::String* get_ShowPrice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_SHOWPRICE_OFFSET))(this);
		}

		::System::Void set_ShowPrice(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_SHOWPRICE_OFFSET))(this, a1);
		}

		::System::Single get_Price()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRICE_OFFSET))(this);
		}

		::System::Void set_Price(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRICE_OFFSET))(this, a1);
		}

		::IMBPFFMCJDF get_ProductGiftType()
		{
			return ((::IMBPFFMCJDF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_PRODUCTGIFTTYPE_OFFSET))(this);
		}

		::System::Void set_ProductGiftType(::IMBPFFMCJDF a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMBPFFMCJDF))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_PRODUCTGIFTTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_GiftVersion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_GIFTVERSION_OFFSET))(this);
		}

		::System::Void set_GiftVersion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_GIFTVERSION_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_BUYTIMES_OFFSET))(this);
		}

		::System::Void set_BuyTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_BUYTIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxBuyTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_MAXBUYTIMES_OFFSET))(this);
		}

		::System::Void set_MaxBuyTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_MAXBUYTIMES_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_BeginTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::RPG::Client::DateTimePro get_EndTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::RPG::Client::DateTimePro a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsSoldOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISSOLDOUT_OFFSET))(this);
		}

		::System::Boolean get_IsFirstRecharge()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISFIRSTRECHARGE_OFFSET))(this);
		}

		::System::Void set_IsFirstRecharge(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SET_ISFIRSTRECHARGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::RechargeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RechargeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsBP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_GET_ISBP_OFFSET))(this);
		}

		::System::Void SetProduct(::System::String* a1, ::System::String* a2, ::IMBPFFMCJDF a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::IMBPFFMCJDF, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETPRODUCT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetBuyTimes(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETBUYTIMES_OFFSET))(this, a1, a2);
		}

		::System::Void SetSchedule(::System::Int64 a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_SETSCHEDULE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateInfo(::HoudiniEngineUnity::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::JSONObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_UPDATEINFO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PRODUCT_TOSTRING_OFFSET))(this);
		}

	};
}
