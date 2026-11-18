#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_GLOBALIZATION_UMALQURACALENDAR_DATEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x8B06B0)

namespace System::Globalization
{
	inline static constexpr unsigned int UmAlQuraCalendar_DateMapping_TypeDefinitionIndex = 765;

	struct alignas(4) UmAlQuraCalendar_DateMapping
	{
		::System::Int32 HijriMonthsLengthFlags; // 0x10
		::System::Byte _padding0[0x4];
		::System::DateTime GregorianDate; // 0x18

		::System::Void _ctor(::System::Int32 MonthsLengthFlags, ::System::Int32 GYear, ::System::Int32 GMonth, ::System::Int32 GDay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_UMALQURACALENDAR_DATEMAPPING__CTOR_OFFSET))(this, MonthsLengthFlags, GYear, GMonth, GDay);
		}
	};
}
