#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DBFCHBKAFHC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x9B1240)

inline static constexpr unsigned int DBFCHBKAFHC_TypeDefinitionIndex = 95038;

struct alignas(4) DBFCHBKAFHC
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 HCKDKJHAOMF; // 0x18

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCHBKAFHC_JGGHNLBNKHA_OFFSET))(this);
	}
};
