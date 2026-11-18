#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JEAKFJMGKHJ_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8B8250)

inline static constexpr unsigned int JEAKFJMGKHJ_TypeDefinitionIndex = 93652;

struct alignas(4) JEAKFJMGKHJ
{
	::System::UInt32 LMPKCHBGHAH; // 0x10
	::System::UInt32 NDBFDDBMBGP; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEAKFJMGKHJ_JGGHNLBNKHA_OFFSET))(this);
	}
};
