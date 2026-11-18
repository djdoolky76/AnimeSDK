#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define AGFDCFIFACO__CTOR_OFFSET UNITYSDK_OFFSET(0x1264CBA0)

inline static constexpr unsigned int AGFDCFIFACO_TypeDefinitionIndex = 48116;

class AGFDCFIFACO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGFDCFIFACO__CTOR_OFFSET))(this);
	}
};
