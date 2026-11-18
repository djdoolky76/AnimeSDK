#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDJNGFPBJIL.h"
#include "unitysdk/System/ValueType.h"

#define LKKBFJKECBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int LKKBFJKECBJ_TypeDefinitionIndex = 46930;

struct alignas(4) LKKBFJKECBJ
{
	::JDJNGFPBJIL GBLHGALMEPN; // 0x10
	::System::Int32 HCHOGCCIINJ; // 0x14

	::System::Void _ctor(::JDJNGFPBJIL OBNIAHNMHPF, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::JDJNGFPBJIL, ::System::Int32))((::PBYTE)hIl2Cpp + LKKBFJKECBJ__CTOR_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
	}
};
