#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OFJALEOCHFB_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x910AD0)

inline static constexpr unsigned int OFJALEOCHFB_TypeDefinitionIndex = 93580;

struct alignas(4) OFJALEOCHFB
{
	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFJALEOCHFB_JGGHNLBNKHA_OFFSET))(this);
	}
};
