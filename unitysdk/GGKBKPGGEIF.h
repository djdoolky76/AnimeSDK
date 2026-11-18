#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFNMABCCOEB.h"
#include "unitysdk/System/ValueType.h"

#define GGKBKPGGEIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x795C70)
#define GGKBKPGGEIF__CTOR_OFFSET UNITYSDK_OFFSET(0x795C60)

inline static constexpr unsigned int GGKBKPGGEIF_TypeDefinitionIndex = 83897;

struct alignas(4) GGKBKPGGEIF
{
	::KFNMABCCOEB MNCPAHPGKPC; // 0x10
	::System::Boolean HCCOGMGMMML; // 0x14

	::System::Void _ctor(::KFNMABCCOEB KNFKIGCNPIP)
	{
		return ((::System::Void(*)(::PVOID, ::KFNMABCCOEB))((::PBYTE)hIl2Cpp + GGKBKPGGEIF__CTOR_OFFSET))(this, KNFKIGCNPIP);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKBKPGGEIF_DISPOSE_OFFSET))(this);
	}
};
