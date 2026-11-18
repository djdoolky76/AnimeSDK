#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define EPGJKCENLJB_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x98F740)

inline static constexpr unsigned int EPGJKCENLJB_TypeDefinitionIndex = 94932;

struct alignas(4) EPGJKCENLJB
{
	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGJKCENLJB_JGGHNLBNKHA_OFFSET))(this);
	}
};
