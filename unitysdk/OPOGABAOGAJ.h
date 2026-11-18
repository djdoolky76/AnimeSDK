#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OPOGABAOGAJ_AOLKFIKCNOH_OFFSET UNITYSDK_OFFSET(0x7FFD80)

inline static constexpr unsigned int OPOGABAOGAJ_TypeDefinitionIndex = 42008;

struct alignas(4) OPOGABAOGAJ
{
	::System::UInt32 DCCJCNMJICD; // 0x10
	::System::Boolean HLJPINPGIJN; // 0x14
	::System::Boolean FIIDPFMJCHC; // 0x15

	::System::Boolean AOLKFIKCNOH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOGABAOGAJ_AOLKFIKCNOH_OFFSET))(this);
	}
};
