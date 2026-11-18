#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CultureTypes.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Globalization/CultureInfo_Data.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Globalization { class Calendar; }
namespace System::Globalization { class CompareInfo; }
namespace System::Globalization { class CultureData; }
namespace System::Globalization { class DateTimeFormatInfo; }
namespace System::Globalization { class NumberFormatInfo; }
namespace System::Globalization { class TextInfo; }

#define SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKDOMAINSAFETYOBJECT_OFFSET UNITYSDK_OFFSET(0x1DF79450)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1DF765E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x1DF75DC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF75F40)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73F10)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF74280)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTINVARIANT_OFFSET UNITYSDK_OFFSET(0x1DF76BD0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_LCID_OFFSET UNITYSDK_OFFSET(0x1DF76B60)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_NAME_OFFSET UNITYSDK_OFFSET(0x1DF76BC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1DF75340)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECALENDAR_OFFSET UNITYSDK_OFFSET(0x1DF754D0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECULTURE_OFFSET UNITYSDK_OFFSET(0x1DF77A70)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATENOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DF77410)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTUREFROMNEUTRAL_OFFSET UNITYSDK_OFFSET(0x1DF77AC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73FB0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_CREATETEXTINFO_OFFSET UNITYSDK_OFFSET(0x1DF75C00)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF76160)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCONSOLEFALLBACKUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF74A60)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFOBYIETFLANGUAGETAG_OFFSET UNITYSDK_OFFSET(0x1DF779C0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_1_OFFSET UNITYSDK_OFFSET(0x1DF74FC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_2_OFFSET UNITYSDK_OFFSET(0x1DF77920)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_OFFSET UNITYSDK_OFFSET(0x1DF77730)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTURES_OFFSET UNITYSDK_OFFSET(0x1DF746F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF76AD0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF76280)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GETTEXTINFODATA_OFFSET UNITYSDK_OFFSET(0x1DF761E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDARTYPE_OFFSET UNITYSDK_OFFSET(0x1DF76200)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDAR_OFFSET UNITYSDK_OFFSET(0x1DF75440)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_COMPAREINFO_OFFSET UNITYSDK_OFFSET(0x1DF763F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CULTURETYPES_OFFSET UNITYSDK_OFFSET(0x1DF74320)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73C90)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73DD0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENT_LOCALE_NAME_OFFSET UNITYSDK_OFFSET(0x1DF73FA0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF76790)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF792E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF79300)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1DF769B0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ENGLISHNAME_OFFSET UNITYSDK_OFFSET(0x1DF769C0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_HASINVARIANTCULTURENAME_OFFSET UNITYSDK_OFFSET(0x1DF795E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_IETFLANGUAGETAG_OFFSET UNITYSDK_OFFSET(0x1DF751B0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INSTALLEDUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF76A30)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INVARIANTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73C80)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISNEUTRALCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF76560)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1DF76AC0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_KEYBOARDLAYOUTID_OFFSET UNITYSDK_OFFSET(0x1DF75260)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_LCID_OFFSET UNITYSDK_OFFSET(0x1DF752B0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DF752C0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NATIVECALENDARNAME_OFFSET UNITYSDK_OFFSET(0x1DF753A0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NATIVENAME_OFFSET UNITYSDK_OFFSET(0x1DF752D0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NUMBERFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF765F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_OPTIONALCALENDARS_OFFSET UNITYSDK_OFFSET(0x1DF756B0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1DF75780)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_SORTNAME_OFFSET UNITYSDK_OFFSET(0x1DF79320)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TERRITORY_OFFSET UNITYSDK_OFFSET(0x1DF74310)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TEXTINFO_OFFSET UNITYSDK_OFFSET(0x1DF75A90)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_THREELETTERISOLANGUAGENAME_OFFSET UNITYSDK_OFFSET(0x1DF75C60)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_THREELETTERWINDOWSLANGUAGENAME_OFFSET UNITYSDK_OFFSET(0x1DF75CD0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TWOLETTERISOLANGUAGENAME_OFFSET UNITYSDK_OFFSET(0x1DF75D40)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF793C0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF79330)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USEUSEROVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DF75DB0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_INSERT_INTO_SHARED_TABLES_OFFSET UNITYSDK_OFFSET(0x1DF77510)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_INTERNAL_GET_CULTURES_OFFSET UNITYSDK_OFFSET(0x1DF761D0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_READONLY_OFFSET UNITYSDK_OFFSET(0x1DF76290)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_CURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73D30)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_CURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF73E70)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DATETIMEFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF768A0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DEFAULTTHREADCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x1DF792F0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DEFAULTTHREADCURRENTUICULTURE_OFFSET UNITYSDK_OFFSET(0x1DF79310)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_SET_NUMBERFORMAT_OFFSET UNITYSDK_OFFSET(0x1DF76680)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF763E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_VERIFYCULTURENAME_1_OFFSET UNITYSDK_OFFSET(0x1DF797B0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO_VERIFYCULTURENAME_OFFSET UNITYSDK_OFFSET(0x1DF79640)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF797E0)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF76E10)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DF76E20)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DF75A70)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DF77140)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DF77150)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1DF77500)
#define SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF75A80)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureInfo_TypeDefinitionIndex = 775;

	class CultureInfo : public ::System::Object
	{
	public:
		static ::System::Globalization::CultureInfo** StaticGet_default_current_culture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::Globalization::CultureInfo** StaticGet_s_DefaultThreadCurrentCulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Globalization::CultureInfo*>** StaticGet_shared_by_number()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Globalization::CultureInfo*>** StaticGet_shared_by_name()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Globalization::CultureInfo*>**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::System::Object** StaticGet_shared_table_lock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x40);
		}
		static ::System::Globalization::CultureInfo** StaticGet_invariant_culture_info()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x48);
		}
		static ::System::Globalization::CultureInfo** StaticGet_s_DefaultThreadCurrentUICulture()
		{
			return (::System::Globalization::CultureInfo**)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x50);
		}
		static ::System::Boolean* StaticGet_IsTaiwanSku()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CultureInfo_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		// static const ::System::Int32 InvariantCultureId = 0x7F; // 0x0
		// static const ::System::Int32 CalendarTypeBits = 0x8; // 0x0
		// static const ::System::String* MSG_READONLY; // 0x0
		::System::Boolean m_isReadOnly; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 cultureID; // 0x14
		::System::Int32 parent_lcid; // 0x18
		::System::Int32 datetime_index; // 0x1C
		::System::Int32 number_index; // 0x20
		::System::Int32 default_calendar_type; // 0x24
		::System::Boolean m_useUserOverride; // 0x28
		::System::Byte _padding1[0x7];
		::System::Globalization::NumberFormatInfo* numInfo; // 0x30
		::System::Globalization::DateTimeFormatInfo* dateTimeInfo; // 0x38
		::System::Globalization::TextInfo* textInfo; // 0x40
		::System::String* m_name; // 0x48
		::System::String* englishname; // 0x50
		::System::String* nativename; // 0x58
		::System::String* iso3lang; // 0x60
		::System::String* iso2lang; // 0x68
		::System::String* win3lang; // 0x70
		::System::String* territory; // 0x78
		::Il2CppArray<::System::String*>* native_calendar_names; // 0x80
		::System::Globalization::CompareInfo* compareInfo; // 0x88
		::PVOID textinfo_data; // 0x90
		::System::Int32 m_dataItem; // 0x98
		::System::Byte _padding2[0x4];
		::System::Globalization::Calendar* calendar; // 0xA0
		::System::Globalization::CultureInfo* parent_culture; // 0xA8
		::System::Boolean constructed; // 0xB0
		::System::Byte _padding3[0x7];
		::Il2CppArray<::System::Byte>* cached_serialized_form; // 0xB8
		::System::Globalization::CultureData* m_cultureData; // 0xC0
		::System::Boolean m_isInherited; // 0xC8

		::System::Void _ctor(::System::Int32 culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_OFFSET))(this, culture);
		}

		::System::Void _ctor_1(::System::Int32 culture, ::System::Boolean useUserOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_1_OFFSET))(this, culture, useUserOverride);
		}

		::System::Void _ctor_2(::System::Int32 culture, ::System::Boolean useUserOverride, ::System::Boolean read_only)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_2_OFFSET))(this, culture, useUserOverride, read_only);
		}

		::System::Void _ctor_3(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_3_OFFSET))(this, name);
		}

		::System::Void _ctor_4(::System::String* name, ::System::Boolean useUserOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_4_OFFSET))(this, name, useUserOverride);
		}

		::System::Void _ctor_5(::System::String* name, ::System::Boolean useUserOverride, ::System::Boolean read_only)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_5_OFFSET))(this, name, useUserOverride, read_only);
		}

		::System::Void _ctor_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CTOR_6_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO__CCTOR_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_InvariantCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INVARIANTCULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_CurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTCULTURE_OFFSET))();
		}

		static ::System::Void set_CurrentCulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_CURRENTCULTURE_OFFSET))(value);
		}

		static ::System::Globalization::CultureInfo* get_CurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENTUICULTURE_OFFSET))();
		}

		static ::System::Void set_CurrentUICulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_CURRENTUICULTURE_OFFSET))(value);
		}

		static ::System::Globalization::CultureInfo* ConstructCurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTCULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* ConstructCurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTCURRENTUICULTURE_OFFSET))();
		}

		::System::String* get_Territory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TERRITORY_OFFSET))(this);
		}

		::System::Globalization::CultureTypes get_CultureTypes()
		{
			return ((::System::Globalization::CultureTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CULTURETYPES_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* GetConsoleFallbackUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCONSOLEFALLBACKUICULTURE_OFFSET))(this);
		}

		::System::String* get_IetfLanguageTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_IETFLANGUAGETAG_OFFSET))(this);
		}

		::System::Int32 get_KeyboardLayoutId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_KEYBOARDLAYOUTID_OFFSET))(this);
		}

		::System::Int32 get_LCID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_LCID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NativeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NATIVENAME_OFFSET))(this);
		}

		::System::String* get_NativeCalendarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NATIVECALENDARNAME_OFFSET))(this);
		}

		::System::Globalization::Calendar* get_Calendar()
		{
			return ((::System::Globalization::Calendar*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDAR_OFFSET))(this);
		}

		::Il2CppArray<::System::Globalization::Calendar*>* get_OptionalCalendars()
		{
			return ((::Il2CppArray<::System::Globalization::Calendar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_OPTIONALCALENDARS_OFFSET))(this);
		}

		::System::Globalization::CultureInfo* get_Parent()
		{
			return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_PARENT_OFFSET))(this);
		}

		::System::Globalization::TextInfo* get_TextInfo()
		{
			return ((::System::Globalization::TextInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TEXTINFO_OFFSET))(this);
		}

		::System::String* get_ThreeLetterISOLanguageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_THREELETTERISOLANGUAGENAME_OFFSET))(this);
		}

		::System::String* get_ThreeLetterWindowsLanguageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_THREELETTERWINDOWSLANGUAGENAME_OFFSET))(this);
		}

		::System::String* get_TwoLetterISOLanguageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_TWOLETTERISOLANGUAGENAME_OFFSET))(this);
		}

		::System::Boolean get_UseUserOverride()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USEUSEROVERRIDE_OFFSET))(this);
		}

		::System::Void ClearCachedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CLEARCACHEDDATA_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_EQUALS_OFFSET))(this, value);
		}

		static ::Il2CppArray<::System::Globalization::CultureInfo*>* GetCultures(::System::Globalization::CultureTypes types)
		{
			return ((::Il2CppArray<::System::Globalization::CultureInfo*>*(*)(::System::Globalization::CultureTypes))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTURES_OFFSET))(types);
		}

		::System::Globalization::CultureInfo_Data GetTextInfoData()
		{
			return ((::System::Globalization::CultureInfo_Data(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETTEXTINFODATA_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Globalization::CultureInfo* ReadOnly(::System::Globalization::CultureInfo* ci)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_READONLY_OFFSET))(ci);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_TOSTRING_OFFSET))(this);
		}

		::System::Globalization::CompareInfo* get_CompareInfo()
		{
			return ((::System::Globalization::CompareInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_COMPAREINFO_OFFSET))(this);
		}

		::System::Boolean get_IsNeutralCulture()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISNEUTRALCULTURE_OFFSET))(this);
		}

		::System::Void CheckNeutral()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKNEUTRAL_OFFSET))(this);
		}

		::System::Globalization::NumberFormatInfo* get_NumberFormat()
		{
			return ((::System::Globalization::NumberFormatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_NUMBERFORMAT_OFFSET))(this);
		}

		::System::Void set_NumberFormat(::System::Globalization::NumberFormatInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::NumberFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_NUMBERFORMAT_OFFSET))(this, value);
		}

		::System::Globalization::DateTimeFormatInfo* get_DateTimeFormat()
		{
			return ((::System::Globalization::DateTimeFormatInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DATETIMEFORMAT_OFFSET))(this);
		}

		::System::Void set_DateTimeFormat(::System::Globalization::DateTimeFormatInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DATETIMEFORMAT_OFFSET))(this, value);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_EnglishName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ENGLISHNAME_OFFSET))(this);
		}

		static ::System::Globalization::CultureInfo* get_InstalledUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_INSTALLEDUICULTURE_OFFSET))();
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* GetFormat(::System::Type* formatType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETFORMAT_OFFSET))(this, formatType);
		}

		::System::Void Construct()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_OFFSET))(this);
		}

		::System::Boolean construct_internal_locale_from_lcid(::System::Int32 lcid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_LCID_OFFSET))(this, lcid);
		}

		::System::Boolean construct_internal_locale_from_name(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCT_INTERNAL_LOCALE_FROM_NAME_OFFSET))(this, name);
		}

		static ::System::String* get_current_locale_name()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CURRENT_LOCALE_NAME_OFFSET))();
		}

		static ::Il2CppArray<::System::Globalization::CultureInfo*>* internal_get_cultures(::System::Boolean neutral, ::System::Boolean specific, ::System::Boolean installed)
		{
			return ((::Il2CppArray<::System::Globalization::CultureInfo*>*(*)(::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_INTERNAL_GET_CULTURES_OFFSET))(neutral, specific, installed);
		}

		::System::Void ConstructInvariant(::System::Boolean read_only)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CONSTRUCTINVARIANT_OFFSET))(this, read_only);
		}

		::System::Globalization::TextInfo* CreateTextInfo(::System::Boolean readOnly)
		{
			return ((::System::Globalization::TextInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATETEXTINFO_OFFSET))(this, readOnly);
		}

		static ::System::Void insert_into_shared_tables(::System::Globalization::CultureInfo* c)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_INSERT_INTO_SHARED_TABLES_OFFSET))(c);
		}

		static ::System::Globalization::CultureInfo* GetCultureInfo(::System::Int32 culture)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_OFFSET))(culture);
		}

		static ::System::Globalization::CultureInfo* GetCultureInfo_1(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_1_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* GetCultureInfo_2(::System::String* name, ::System::String* altName)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFO_2_OFFSET))(name, altName);
		}

		static ::System::Globalization::CultureInfo* GetCultureInfoByIetfLanguageTag(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GETCULTUREINFOBYIETFLANGUAGETAG_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* CreateCulture(::System::String* name, ::System::Boolean reference)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECULTURE_OFFSET))(name, reference);
		}

		static ::System::Globalization::CultureInfo* CreateSpecificCulture(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTURE_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* CreateSpecificCultureFromNeutral(::System::String* name)
		{
			return ((::System::Globalization::CultureInfo*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATESPECIFICCULTUREFROMNEUTRAL_OFFSET))(name);
		}

		::System::Int32 get_CalendarType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_CALENDARTYPE_OFFSET))(this);
		}

		static ::System::Globalization::Calendar* CreateCalendar(::System::Int32 calendarType)
		{
			return ((::System::Globalization::Calendar*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATECALENDAR_OFFSET))(calendarType);
		}

		static ::System::Exception* CreateNotFoundException(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CREATENOTFOUNDEXCEPTION_OFFSET))(name);
		}

		static ::System::Globalization::CultureInfo* get_DefaultThreadCurrentCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTCULTURE_OFFSET))();
		}

		static ::System::Void set_DefaultThreadCurrentCulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DEFAULTTHREADCURRENTCULTURE_OFFSET))(value);
		}

		static ::System::Globalization::CultureInfo* get_DefaultThreadCurrentUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_DEFAULTTHREADCURRENTUICULTURE_OFFSET))();
		}

		static ::System::Void set_DefaultThreadCurrentUICulture(::System::Globalization::CultureInfo* value)
		{
			return ((::System::Void(*)(::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_SET_DEFAULTTHREADCURRENTUICULTURE_OFFSET))(value);
		}

		::System::String* get_SortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_SORTNAME_OFFSET))(this);
		}

		static ::System::Globalization::CultureInfo* get_UserDefaultUICulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTUICULTURE_OFFSET))();
		}

		static ::System::Globalization::CultureInfo* get_UserDefaultCulture()
		{
			return ((::System::Globalization::CultureInfo*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_USERDEFAULTCULTURE_OFFSET))();
		}

		static ::System::Void CheckDomainSafetyObject(::System::Object* obj, ::System::Object* container)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_CHECKDOMAINSAFETYOBJECT_OFFSET))(obj, container);
		}

		::System::Boolean get_HasInvariantCultureName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_GET_HASINVARIANTCULTURENAME_OFFSET))(this);
		}

		static ::System::Boolean VerifyCultureName(::System::String* cultureName, ::System::Boolean throwException)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_VERIFYCULTURENAME_OFFSET))(cultureName, throwException);
		}

		static ::System::Boolean VerifyCultureName_1(::System::Globalization::CultureInfo* culture, ::System::Boolean throwException)
		{
			return ((::System::Boolean(*)(::System::Globalization::CultureInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTUREINFO_VERIFYCULTURENAME_1_OFFSET))(culture, throwException);
		}
	};
}
