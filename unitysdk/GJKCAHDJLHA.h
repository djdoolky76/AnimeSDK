#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define GJKCAHDJLHA_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CE080)

inline static constexpr unsigned int GJKCAHDJLHA_TypeDefinitionIndex = 94336;

struct alignas(4) GJKCAHDJLHA
{
	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKCAHDJLHA_JGGHNLBNKHA_OFFSET))(this);
	}
};
