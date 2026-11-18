#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CPGHFDKKALE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8B8060)

inline static constexpr unsigned int CPGHFDKKALE_TypeDefinitionIndex = 93623;

struct alignas(4) CPGHFDKKALE
{
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::System::UInt32 IFPCGBJDKCH; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGHFDKKALE_JGGHNLBNKHA_OFFSET))(this);
	}
};
