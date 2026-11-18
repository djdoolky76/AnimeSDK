#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDNONHDGGNB.h"
#include "unitysdk/System/ValueType.h"

#define MEDHHHFCMHO__CTOR_OFFSET UNITYSDK_OFFSET(0x6310E0)

inline static constexpr unsigned int MEDHHHFCMHO_TypeDefinitionIndex = 71622;

struct alignas(4) MEDHHHFCMHO
{
	::IDNONHDGGNB LDHGAHJGDPM; // 0x10

	::System::Void _ctor(::IDNONHDGGNB& DNPNKJKMEHJ)
	{
		return ((::System::Void(*)(::PVOID, ::IDNONHDGGNB&))((::PBYTE)hIl2Cpp + MEDHHHFCMHO__CTOR_OFFSET))(this, DNPNKJKMEHJ);
	}
};
