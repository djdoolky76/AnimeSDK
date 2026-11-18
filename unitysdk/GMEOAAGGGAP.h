#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GMEOAAGGGAP__CTOR_OFFSET UNITYSDK_OFFSET(0x14912830)

inline static constexpr unsigned int GMEOAAGGGAP_TypeDefinitionIndex = 92640;

class GMEOAAGGGAP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEOAAGGGAP__CTOR_OFFSET))(this);
	}
};
