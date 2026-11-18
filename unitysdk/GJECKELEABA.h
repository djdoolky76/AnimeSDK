#pragma once
#include "unitysdk/unitysdk.h"

#define GJECKELEABA__CTOR_OFFSET UNITYSDK_OFFSET(0x11DB3C30)

inline static constexpr unsigned int GJECKELEABA_TypeDefinitionIndex = 87086;

class GJECKELEABA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJECKELEABA__CTOR_OFFSET))(this);
	}
};
