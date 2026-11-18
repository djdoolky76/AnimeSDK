#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGADHDKNCIJ.h"

#define FOBPJOBBLFC__CTOR_OFFSET UNITYSDK_OFFSET(0x13234A30)

inline static constexpr unsigned int FOBPJOBBLFC_TypeDefinitionIndex = 60822;

class FOBPJOBBLFC : public ::HGADHDKNCIJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBPJOBBLFC__CTOR_OFFSET))(this);
	}
};
