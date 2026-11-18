#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define JKEEPNEBNJL_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8E0EC0)

inline static constexpr unsigned int JKEEPNEBNJL_TypeDefinitionIndex = 94828;

struct alignas(4) JKEEPNEBNJL
{
	::System::UInt32 HODAIDNDKHD; // 0x10
	::System::Single HGMMKOBGJNC; // 0x14
	::System::Int32 PHIKBGHJCKK; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKEEPNEBNJL_JGGHNLBNKHA_OFFSET))(this);
	}
};
