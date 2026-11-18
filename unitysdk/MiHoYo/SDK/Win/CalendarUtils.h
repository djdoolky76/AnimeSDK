#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }

#define MIHOYO_SDK_WIN_CALENDARUTILS_DATEFORMATTOTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C4511D0)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATMONTH_OFFSET UNITYSDK_OFFSET(0x1C49ECE0)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C44FE30)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIME_OFFSET UNITYSDK_OFFSET(0x1C49E270)
#define MIHOYO_SDK_WIN_CALENDARUTILS_FORMATYEARMONTH_OFFSET UNITYSDK_OFFSET(0x1C49E480)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETCURRENTYEAR_OFFSET UNITYSDK_OFFSET(0x1C49EF20)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETDAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1C49E660)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHINYEAR_OFFSET UNITYSDK_OFFSET(0x1C49E780)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x1C49EB50)
#define MIHOYO_SDK_WIN_CALENDARUTILS_GETNEXTMONTH_OFFSET UNITYSDK_OFFSET(0x1C49EE90)
#define MIHOYO_SDK_WIN_CALENDARUTILS_ISVALIDDATE_OFFSET UNITYSDK_OFFSET(0x1C49F010)
#define MIHOYO_SDK_WIN_CALENDARUTILS_YEARGAPCALCULATE_OFFSET UNITYSDK_OFFSET(0x1C49E800)
#define MIHOYO_SDK_WIN_CALENDARUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49F040)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CalendarUtils_TypeDefinitionIndex = 20581;

	class CalendarUtils : public ::System::Object
	{
	public:
		// static const ::System::String* MODULE_NAME; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS__CTOR_OFFSET))(this);
		}

		static ::System::String* FormatTimestamp(::System::Int64 timestamp, ::System::String* cultureCode, ::System::String* formatSpecifier)
		{
			return ((::System::String*(*)(::System::Int64, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIMESTAMP_OFFSET))(timestamp, cultureCode, formatSpecifier);
		}

		static ::System::String* FormatTime(::System::Int32 year, ::System::Int32 month, ::System::String* cultureCode, ::System::Boolean needShowSecond)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATTIME_OFFSET))(year, month, cultureCode, needShowSecond);
		}

		static ::System::String* FormatYearMonth(::System::Int32 year, ::System::Int32 month, ::System::String* cultureCode)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATYEARMONTH_OFFSET))(year, month, cultureCode);
		}

		static ::System::Int64 DateFormatToTimestamp(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_DATEFORMATTOTIMESTAMP_OFFSET))(year, month, day);
		}

		static ::System::Int32 GetDaysInMonth(::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETDAYSINMONTH_OFFSET))(year, month);
		}

		static ::System::Int32 GetMonthInYear(::System::Int32 year)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHINYEAR_OFFSET))(year);
		}

		static ::System::Int32 YearGapCalculate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_YEARGAPCALCULATE_OFFSET))(year, month, day);
		}

		static ::Il2CppArray<::System::String*>* GetMonthStringArray()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETMONTHSTRINGARRAY_OFFSET))();
		}

		static ::System::String* FormatMonth(::System::Int32 month, ::System::String* cultureCode)
		{
			return ((::System::String*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_FORMATMONTH_OFFSET))(month, cultureCode);
		}

		static ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> GetNextMonth(::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETNEXTMONTH_OFFSET))(year, month);
		}

		static ::System::Int32 GetCurrentYear()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_GETCURRENTYEAR_OFFSET))();
		}

		static ::System::Boolean IsValidDate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CALENDARUTILS_ISVALIDDATE_OFFSET))(year, month, day);
		}
	};
}
