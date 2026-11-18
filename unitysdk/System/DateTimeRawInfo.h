#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeParse_TM.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DATETIMERAWINFO_ADDNUMBER_OFFSET UNITYSDK_OFFSET(0x8C00D0)
#define SYSTEM_DATETIMERAWINFO_GETNUMBER_OFFSET UNITYSDK_OFFSET(0x385050)
#define SYSTEM_DATETIMERAWINFO_INIT_OFFSET UNITYSDK_OFFSET(0x8C00A0)

namespace System
{
	inline static constexpr unsigned int DateTimeRawInfo_TypeDefinitionIndex = 249;

	struct alignas(8) DateTimeRawInfo
	{
		::PVOID num; // 0x10
		::System::Int32 numCount; // 0x18
		::System::Int32 month; // 0x1C
		::System::Int32 year; // 0x20
		::System::Int32 dayOfWeek; // 0x24
		::System::Int32 era; // 0x28
		::System::DateTimeParse_TM timeMark; // 0x2C
		::System::Double fraction; // 0x30
		::System::Boolean hasSameDateAndTimeSeparators; // 0x38
		::System::Boolean timeZone; // 0x39

		::System::Void Init(::PVOID numberBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERAWINFO_INIT_OFFSET))(this, numberBuffer);
		}

		::System::Void AddNumber(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERAWINFO_ADDNUMBER_OFFSET))(this, value);
		}

		::System::Int32 GetNumber(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMERAWINFO_GETNUMBER_OFFSET))(this, index);
		}
	};
}
