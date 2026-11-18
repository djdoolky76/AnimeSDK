#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CKKFHBFLOFB_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x97DFA0)

inline static constexpr unsigned int CKKFHBFLOFB_TypeDefinitionIndex = 95125;

struct alignas(4) CKKFHBFLOFB
{
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 GFOJCEHPPBK; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKKFHBFLOFB_JGGHNLBNKHA_OFFSET))(this);
	}
};
