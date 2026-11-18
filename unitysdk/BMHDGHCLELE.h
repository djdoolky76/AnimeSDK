#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKBKMMKEML.h"

#define BMHDGHCLELE__CTOR_OFFSET UNITYSDK_OFFSET(0x13983CB0)

inline static constexpr unsigned int BMHDGHCLELE_TypeDefinitionIndex = 64722;

class BMHDGHCLELE : public ::MIKBKMMKEML
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHDGHCLELE__CTOR_OFFSET))(this);
	}
};
