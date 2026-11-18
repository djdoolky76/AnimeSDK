#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GMILHLKDFDP__CTOR_OFFSET UNITYSDK_OFFSET(0x149EDD70)

inline static constexpr unsigned int GMILHLKDFDP_TypeDefinitionIndex = 44716;

class GMILHLKDFDP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMILHLKDFDP__CTOR_OFFSET))(this);
	}
};
