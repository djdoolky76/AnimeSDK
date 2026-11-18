#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define HJNLCKAMAMP_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8B81E0)

inline static constexpr unsigned int HJNLCKAMAMP_TypeDefinitionIndex = 93473;

struct alignas(4) HJNLCKAMAMP
{
	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLCKAMAMP_JGGHNLBNKHA_OFFSET))(this);
	}
};
