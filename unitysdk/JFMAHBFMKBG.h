#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JFMAHBFMKBG_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8B8260)

inline static constexpr unsigned int JFMAHBFMKBG_TypeDefinitionIndex = 93699;

struct alignas(4) JFMAHBFMKBG
{
	::System::UInt32 JOABFILLGDD; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMAHBFMKBG_JGGHNLBNKHA_OFFSET))(this);
	}
};
