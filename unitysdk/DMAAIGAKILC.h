#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DMAAIGAKILC__CTOR_OFFSET UNITYSDK_OFFSET(0x13E58B60)

inline static constexpr unsigned int DMAAIGAKILC_TypeDefinitionIndex = 47983;

class DMAAIGAKILC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAAIGAKILC__CTOR_OFFSET))(this);
	}
};
