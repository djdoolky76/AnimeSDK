#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPNEKBLDEOK.h"
#include "unitysdk/System/ValueType.h"

#define ILEEPAOEELP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x718D70)
#define ILEEPAOEELP__CTOR_OFFSET UNITYSDK_OFFSET(0x358470)

inline static constexpr unsigned int ILEEPAOEELP_TypeDefinitionIndex = 82009;

struct alignas(4) ILEEPAOEELP
{
	::KPNEKBLDEOK HDIEABKPPNF; // 0x10

	::System::Void _ctor(::KPNEKBLDEOK PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::KPNEKBLDEOK))((::PBYTE)hIl2Cpp + ILEEPAOEELP__CTOR_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEEPAOEELP_DISPOSE_OFFSET))(this);
	}
};
