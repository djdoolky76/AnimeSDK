#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DCHEAOOJFON_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x972B10)

inline static constexpr unsigned int DCHEAOOJFON_TypeDefinitionIndex = 28763;

struct alignas(4) DCHEAOOJFON
{
	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCHEAOOJFON_JGGHNLBNKHA_OFFSET))(this);
	}
};
