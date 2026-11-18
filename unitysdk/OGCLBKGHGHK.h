#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define OGCLBKGHGHK_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x8D4760)

inline static constexpr unsigned int OGCLBKGHGHK_TypeDefinitionIndex = 93796;

struct alignas(4) OGCLBKGHGHK
{
	::System::UInt32 NJNCGJLHLKC; // 0x10
	::System::Int32 KMLPFPOCOEO; // 0x14

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCLBKGHGHK_JGGHNLBNKHA_OFFSET))(this);
	}
};
