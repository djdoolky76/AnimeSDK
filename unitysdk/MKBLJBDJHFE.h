#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MKBLJBDJHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x6F2840)

inline static constexpr unsigned int MKBLJBDJHFE_TypeDefinitionIndex = 69548;

struct alignas(4) MKBLJBDJHFE
{
	::System::Boolean LCGNHLHPDLE; // 0x10
	::System::Boolean EMAPIOBADAF; // 0x11

	::System::Void _ctor(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKBLJBDJHFE__CTOR_OFFSET))(this, CAAFEGLOALC);
	}
};
