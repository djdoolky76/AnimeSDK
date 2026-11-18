#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNHLKCKBNMK.h"
#include "unitysdk/System/ValueType.h"

#define GCJKFMCKCFO__CTOR_OFFSET UNITYSDK_OFFSET(0x682860)

inline static constexpr unsigned int GCJKFMCKCFO_TypeDefinitionIndex = 51763;

struct alignas(4) GCJKFMCKCFO
{
	::CNHLKCKBNMK KEHECMCDLFC; // 0x10
	::System::Single MHIKGCONLLN; // 0x20

	::System::Void _ctor(::CNHLKCKBNMK& HODAIDNDKHD, ::System::Single KGHNBNOMMJI)
	{
		return ((::System::Void(*)(::PVOID, ::CNHLKCKBNMK&, ::System::Single))((::PBYTE)hIl2Cpp + GCJKFMCKCFO__CTOR_OFFSET))(this, HODAIDNDKHD, KGHNBNOMMJI);
	}
};
