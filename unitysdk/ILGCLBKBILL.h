#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKJNBDJLIAP.h"

#define ILGCLBKBILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1870EA90)

inline static constexpr unsigned int ILGCLBKBILL_TypeDefinitionIndex = 39564;

class ILGCLBKBILL : public ::FKJNBDJLIAP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILGCLBKBILL__CTOR_OFFSET))(this);
	}
};
