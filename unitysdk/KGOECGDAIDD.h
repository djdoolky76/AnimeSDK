#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define KGOECGDAIDD_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CE0D0)

inline static constexpr unsigned int KGOECGDAIDD_TypeDefinitionIndex = 94311;

struct alignas(4) KGOECGDAIDD
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::Int32 IHBDLBENEFG; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGOECGDAIDD_JGGHNLBNKHA_OFFSET))(this);
	}
};
