#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define LKPJPFCLFNO_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x85A150)

inline static constexpr unsigned int LKPJPFCLFNO_TypeDefinitionIndex = 93359;

struct alignas(4) LKPJPFCLFNO
{
	::System::UInt32 AOGNNJLKHGL; // 0x10

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKPJPFCLFNO_JGGHNLBNKHA_OFFSET))(this);
	}
};
