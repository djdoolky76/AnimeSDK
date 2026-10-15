#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanParse_TTT.h"
namespace System { class String; }

#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C210E0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x3C210C0)
#define SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_ISINVALIDNUMBER_OFFSET UNITYSDK_OFFSET(0x3C21100)

namespace System::Globalization
{
	struct alignas(8) TimeSpanParse_TimeSpanToken
	{
		::System::Globalization::TimeSpanParse_TTT ttt; // 0x10
		::System::Int32 num; // 0x14
		::System::Int32 zeroes; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* sep; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInvalidNumber(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_TIMESPANPARSE_TIMESPANTOKEN_ISINVALIDNUMBER_OFFSET))(this, a1, a2);
		}

	};
}
