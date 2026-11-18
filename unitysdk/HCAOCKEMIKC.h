#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define HCAOCKEMIKC__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3B670)

inline static constexpr unsigned int HCAOCKEMIKC_TypeDefinitionIndex = 60916;

class HCAOCKEMIKC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCAOCKEMIKC__CTOR_OFFSET))(this);
	}
};
