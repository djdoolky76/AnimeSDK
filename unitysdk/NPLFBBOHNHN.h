#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPLFBBOHNHN_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x97E0E0)

inline static constexpr unsigned int NPLFBBOHNHN_TypeDefinitionIndex = 94986;

struct alignas(4) NPLFBBOHNHN
{
	::System::UInt32 BKLGNCBNEGM; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLFBBOHNHN_JGGHNLBNKHA_OFFSET))(this);
	}
};
