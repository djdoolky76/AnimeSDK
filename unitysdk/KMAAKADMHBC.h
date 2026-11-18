#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFHADJGFLOI.h"
#include "unitysdk/System/Attribute.h"

#define KMAAKADMHBC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20068350)
#define KMAAKADMHBC__CTOR_OFFSET UNITYSDK_OFFSET(0x20068340)

inline static constexpr unsigned int KMAAKADMHBC_TypeDefinitionIndex = 6984;

class KMAAKADMHBC : public ::System::Attribute
{
public:
	::DFHADJGFLOI BPPFOHPGKHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAAKADMHBC__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::DFHADJGFLOI KNAOOFIBEBK)
	{
		return ((::System::Void(*)(::PVOID, ::DFHADJGFLOI))((::PBYTE)hIl2Cpp + KMAAKADMHBC__CTOR_1_OFFSET))(this, KNAOOFIBEBK);
	}
};
