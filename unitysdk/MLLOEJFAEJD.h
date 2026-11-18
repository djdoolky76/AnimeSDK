#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MLLOEJFAEJD_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CC650)

inline static constexpr unsigned int MLLOEJFAEJD_TypeDefinitionIndex = 93330;

struct alignas(4) MLLOEJFAEJD
{
	::System::UInt32 JOABFILLGDD; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLOEJFAEJD_JGGHNLBNKHA_OFFSET))(this);
	}
};
