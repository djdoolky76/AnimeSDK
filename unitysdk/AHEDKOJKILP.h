#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFAIIBKMIEB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AHEDKOJKILP_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8E3A10)

inline static constexpr unsigned int AHEDKOJKILP_TypeDefinitionIndex = 93999;

struct alignas(4) AHEDKOJKILP
{
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::CFAIIBKMIEB FJPBKADAMGC; // 0x14
	::System::Int32 NJNCOHLPLNJ; // 0x18
	::System::Int32 OAPPAPMDAGF; // 0x1C

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEDKOJKILP_JGGHNLBNKHA_OFFSET))(this);
	}
};
