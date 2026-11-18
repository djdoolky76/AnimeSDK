#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OCGJBLEJJFO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x49A440)
#define OCGJBLEJJFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x49A430)

inline static constexpr unsigned int OCGJBLEJJFO_TypeDefinitionIndex = 69411;

struct alignas(4) OCGJBLEJJFO
{
	::System::Boolean EPHDANKFBEE; // 0x10
	::System::Boolean EBFIPDHOHFE; // 0x11
	::System::Byte _padding0[0x2];
	::System::Int32 ONNADDBEJID; // 0x14
	::System::Int32 DGPHNLLPAEG; // 0x18
	::System::Single DBIJENGJIIO; // 0x1C
	::System::Single ODCFDEDGNGD; // 0x20

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGJBLEJJFO_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGJBLEJJFO_DPIHOJBBGLA_OFFSET))(this);
	}
};
