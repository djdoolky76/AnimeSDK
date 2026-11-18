#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PNEAPNIMIKB_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8CFB30)

inline static constexpr unsigned int PNEAPNIMIKB_TypeDefinitionIndex = 94318;

struct alignas(4) PNEAPNIMIKB
{
	::System::UInt32 JOABFILLGDD; // 0x10
	::System::UInt32 FJOIFHFMBCA; // 0x14
	::System::UInt32 EEKAOFHHEGM; // 0x18
	::System::UInt32 PCBDNKELNMK; // 0x1C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEAPNIMIKB_JGGHNLBNKHA_OFFSET))(this);
	}
};
