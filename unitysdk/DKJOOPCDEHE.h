#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DKJOOPCDEHE__CTOR_OFFSET UNITYSDK_OFFSET(0x3B58E0)

inline static constexpr unsigned int DKJOOPCDEHE_TypeDefinitionIndex = 43641;

struct alignas(8) DKJOOPCDEHE
{
	::System::String* LJMFBKBHHFG; // 0x10
	::System::Int32 LONDMNEMFKN; // 0x18

	::System::Void _ctor(::System::String* IMOLCPPFMOI, ::System::Int32 BABIHDEGHAB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DKJOOPCDEHE__CTOR_OFFSET))(this, IMOLCPPFMOI, BABIHDEGHAB);
	}
};
