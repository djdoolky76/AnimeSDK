#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define OKMPLBFHKED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C27DC0)

	struct alignas(4) OKMPLBFHKED
	{
		::System::Int32 MFNIHGPPHNJ; // 0x10
		::System::UInt64 DBHKJLGDNAF; // 0x14
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMPLBFHKED_TOSTRING_OFFSET))(this);
		}

	};
