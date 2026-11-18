#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define ICLHDIOEGKB_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x9011E0)

inline static constexpr unsigned int ICLHDIOEGKB_TypeDefinitionIndex = 94319;

struct alignas(4) ICLHDIOEGKB
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::Single LLBEKEFONPC; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICLHDIOEGKB_JGGHNLBNKHA_OFFSET))(this);
	}
};
