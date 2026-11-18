#pragma once
#include "unitysdk/unitysdk.h"

#define KCOPDFIIHND_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D3EF5D0)
#define KCOPDFIIHND__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EF610)

inline static constexpr unsigned int KCOPDFIIHND_TypeDefinitionIndex = 94312;

class KCOPDFIIHND
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOPDFIIHND__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOPDFIIHND_AIMAIGLGDBE_OFFSET))(this);
	}
};
