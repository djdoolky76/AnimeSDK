#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/Calendar.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
namespace System { class String; }
namespace System::Globalization { class Calendar; }
namespace System::Globalization { class EraInfo; }
namespace System::Globalization { class GregorianCalendarHelper; }

#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ABBREVERANAMES_OFFSET UNITYSDK_OFFSET(0x19DE6210)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_CCTOR_OFFSET UNITYSDK_OFFSET(0x19E09E80)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_CTOR_OFFSET UNITYSDK_OFFSET(0x19E09890)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET UNITYSDK_OFFSET(0x19DE5FD0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET UNITYSDK_OFFSET(0x19DE60F0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET UNITYSDK_OFFSET(0x19E09A30)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x19E09AE0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x19E09A10)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET UNITYSDK_OFFSET(0x19DF78E0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET UNITYSDK_OFFSET(0x19E094B0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET UNITYSDK_OFFSET(0x19E09880)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x19E09B80)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET UNITYSDK_OFFSET(0x19E09B50)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET UNITYSDK_OFFSET(0x19E09BA0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x19E09C50)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x19E09E00)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x19E09A00)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x19E094A0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x19E09440)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET UNITYSDK_OFFSET(0x19E09E40)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x19E09C70)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET UNITYSDK_OFFSET(0x19E09E20)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET UNITYSDK_OFFSET(0x19E09CC0)
#define SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET UNITYSDK_OFFSET(0x19E09CE0)

namespace System::Globalization
{
	inline static constexpr unsigned int JapaneseCalendar_TypeDefinitionIndex = 759;

	class JapaneseCalendar : public ::System::Globalization::Calendar
	{
	public:
		::System::Globalization::GregorianCalendarHelper* helper; // 0x20
		static ::Il2CppArray<::System::Globalization::EraInfo*>** StaticGet_japaneseEraInfo()
		{
			return (::Il2CppArray<::System::Globalization::EraInfo*>**)UnitySDK::FromName("System.Globalization", "JapaneseCalendar")->GetStaticField(0xE250);
		}

		static ::System::Globalization::Calendar** StaticGet_s_defaultInstance()
		{
			return (::System::Globalization::Calendar**)UnitySDK::FromName("System.Globalization", "JapaneseCalendar")->GetStaticField(0xE258);
		}

		static ::System::DateTime* StaticGet_calendarMinValue()
		{
			return (::System::DateTime*)UnitySDK::FromName("System.Globalization", "JapaneseCalendar")->GetStaticField(0x2F90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* GetEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERAINFO_OFFSET))();
		}

		static ::Il2CppArray<::System::Globalization::EraInfo*>* GetErasFromRegistry()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERASFROMREGISTRY_OFFSET))();
		}

		static ::System::Globalization::Calendar* GetDefaultInstance()
		{
			return ((::System::Globalization::Calendar*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDEFAULTINSTANCE_OFFSET))();
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ID_OFFSET))(this);
		}

		::System::Int32 GetDaysInMonth(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYSINMONTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GetDayOfMonth(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFMONTH_OFFSET))(this, a1);
		}

		::System::DayOfWeek GetDayOfWeek(::System::DateTime a1)
		{
			return ((::System::DayOfWeek(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETDAYOFWEEK_OFFSET))(this, a1);
		}

		::System::Int32 GetMonthsInYear(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTHSINYEAR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetEra(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETERA_OFFSET))(this, a1);
		}

		::System::Int32 GetMonth(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETMONTH_OFFSET))(this, a1);
		}

		::System::Int32 GetYear(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GETYEAR_OFFSET))(this, a1);
		}

		::System::Boolean IsLeapYear(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISLEAPYEAR_OFFSET))(this, a1, a2);
		}

		::System::DateTime ToDateTime(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TODATETIME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 ToFourDigitYear(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_TOFOURDIGITYEAR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_ERAS_OFFSET))(this);
		}

		static ::Il2CppArray<::System::String*>* EraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ERANAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* AbbrevEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ABBREVERANAMES_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* EnglishEraNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ENGLISHERANAMES_OFFSET))();
		}

		::System::Boolean IsValidYear(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_ISVALIDYEAR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_TwoDigitYearMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_JAPANESECALENDAR_GET_TWODIGITYEARMAX_OFFSET))(this);
		}

	};
}
