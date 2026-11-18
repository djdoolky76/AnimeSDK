#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/EastAsianLunisolarCalendar.h"
#include "unitysdk/System/DateTime.h"

namespace System { class Object; }
namespace System::Globalization { class EraInfo; }

#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETERA_OFFSET UNITYSDK_OFFSET(0x1E395190)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET UNITYSDK_OFFSET(0x1E395020)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETYEARINFO_OFFSET UNITYSDK_OFFSET(0x1E394EA0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETYEAR_OFFSET UNITYSDK_OFFSET(0x1E395010)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET UNITYSDK_OFFSET(0x1E3951B0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_CALERAINFO_OFFSET UNITYSDK_OFFSET(0x1E394E90)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET UNITYSDK_OFFSET(0x1E394DA0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_ERAS_OFFSET UNITYSDK_OFFSET(0x1E3951D0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E3951C0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1E394DC0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MAXDATE_OFFSET UNITYSDK_OFFSET(0x1E394E30)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1E394D40)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET UNITYSDK_OFFSET(0x1E394DB0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MINDATE_OFFSET UNITYSDK_OFFSET(0x1E394DD0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET UNITYSDK_OFFSET(0x1E394CE0)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E395230)
#define SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E395130)

namespace System::Globalization
{
	inline static constexpr unsigned int KoreanLunisolarCalendar_TypeDefinitionIndex = 740;

	class KoreanLunisolarCalendar : public ::System::Globalization::EastAsianLunisolarCalendar
	{
	public:
		static ::System::Object** StaticGet_yinfo()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KoreanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0x11E0);
		}
		static ::System::DateTime* StaticGet_minDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(KoreanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0xCC0);
		}
		static ::System::DateTime* StaticGet_maxDate()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(KoreanLunisolarCalendar_TypeDefinitionIndex)->GetStaticField(0xCC8);
		}
		// static const ::System::Int32 GregorianEra = 0x1; // 0x0
		// static const ::System::Int32 MIN_LUNISOLAR_YEAR = 0x396; // 0x0
		// static const ::System::Int32 MAX_LUNISOLAR_YEAR = 0x802; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_YEAR = 0x396; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_MONTH = 0x2; // 0x0
		// static const ::System::Int32 MIN_GREGORIAN_DAY = 0xE; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_YEAR = 0x803; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_MONTH = 0x2; // 0x0
		// static const ::System::Int32 MAX_GREGORIAN_DAY = 0xA; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR__CCTOR_OFFSET))();
		}

		::System::DateTime get_MinSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MINSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::DateTime get_MaxSupportedDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MAXSUPPORTEDDATETIME_OFFSET))(this);
		}

		::System::Int32 get_DaysInYearBeforeMinSupportedYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_DAYSINYEARBEFOREMINSUPPORTEDYEAR_OFFSET))(this);
		}

		::System::Int32 get_MinCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MINCALENDARYEAR_OFFSET))(this);
		}

		::System::Int32 get_MaxCalendarYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MAXCALENDARYEAR_OFFSET))(this);
		}

		::System::DateTime get_MinDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MINDATE_OFFSET))(this);
		}

		::System::DateTime get_MaxDate()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_MAXDATE_OFFSET))(this);
		}

		::Il2CppArray<::System::Globalization::EraInfo*>* get_CalEraInfo()
		{
			return ((::Il2CppArray<::System::Globalization::EraInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_CALERAINFO_OFFSET))(this);
		}

		::System::Int32 GetYearInfo(::System::Int32 LunarYear, ::System::Int32 Index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETYEARINFO_OFFSET))(this, LunarYear, Index);
		}

		::System::Int32 GetYear(::System::Int32 year, ::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETYEAR_OFFSET))(this, year, time);
		}

		::System::Int32 GetGregorianYear(::System::Int32 year, ::System::Int32 era)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETGREGORIANYEAR_OFFSET))(this, year, era);
		}

		::System::Int32 GetEra(::System::DateTime time)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GETERA_OFFSET))(this, time);
		}

		::System::Int32 get_BaseCalendarID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_BASECALENDARID_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_ID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_Eras()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_KOREANLUNISOLARCALENDAR_GET_ERAS_OFFSET))(this);
		}
	};
}
