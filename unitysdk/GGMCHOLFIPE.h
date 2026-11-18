#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKLBGAKHAOC.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FCHJNOPGGLF.h"

#define GGMCHOLFIPE_GNDPNCINPEP_OFFSET UNITYSDK_OFFSET(0x721E00)
#define GGMCHOLFIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x721DF0)

inline static constexpr unsigned int GGMCHOLFIPE_TypeDefinitionIndex = 65281;

struct alignas(4) GGMCHOLFIPE
{
	::AKLBGAKHAOC OFINPPCLNIF; // 0x10
	::System::Int32 ACPOMBIMAEN; // 0x14
	::System::Boolean JGEKEPDOMNP; // 0x18

	::System::Void _ctor(::AKLBGAKHAOC KFJPMAPGOBM, ::System::Int32 FNLFPMFJGKH, ::System::Boolean AEHHAIPHJBO)
	{
		return ((::System::Void(*)(::PVOID, ::AKLBGAKHAOC, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GGMCHOLFIPE__CTOR_OFFSET))(this, KFJPMAPGOBM, FNLFPMFJGKH, AEHHAIPHJBO);
	}

	::FCHJNOPGGLF GNDPNCINPEP()
	{
		return ((::FCHJNOPGGLF(*)(::PVOID))((::PBYTE)hIl2Cpp + GGMCHOLFIPE_GNDPNCINPEP_OFFSET))(this);
	}
};
