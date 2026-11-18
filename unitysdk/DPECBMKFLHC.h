#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMKBPDACNPI.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DPECBMKFLHC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x9011D0)

inline static constexpr unsigned int DPECBMKFLHC_TypeDefinitionIndex = 94127;

struct alignas(4) DPECBMKFLHC
{
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::EMKBPDACNPI FJPBKADAMGC; // 0x14
	::System::Single NJNCOHLPLNJ; // 0x18
	::System::Single OAPPAPMDAGF; // 0x1C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPECBMKFLHC_JGGHNLBNKHA_OFFSET))(this);
	}
};
