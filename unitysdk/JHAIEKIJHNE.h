#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JHAIEKIJHNE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x95DE40)

inline static constexpr unsigned int JHAIEKIJHNE_TypeDefinitionIndex = 95017;

struct alignas(4) JHAIEKIJHNE
{
	::System::UInt64 AHPHBALLLJD; // 0x10
	::System::Boolean IKIPAHCGILN; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAIEKIJHNE_JGGHNLBNKHA_OFFSET))(this);
	}
};
