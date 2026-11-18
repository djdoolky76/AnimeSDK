#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define KEHNBPGMOBC_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x9ADBD0)

inline static constexpr unsigned int KEHNBPGMOBC_TypeDefinitionIndex = 95036;

struct alignas(8) KEHNBPGMOBC
{
	::Il2CppArray<::System::UInt32>* LDBJJHJMBOK; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHNBPGMOBC_JGGHNLBNKHA_OFFSET))(this);
	}
};
