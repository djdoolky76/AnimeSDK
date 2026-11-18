#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OCMNKAGODIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B774960)

inline static constexpr unsigned int OCMNKAGODIE_TypeDefinitionIndex = 52493;

class OCMNKAGODIE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMNKAGODIE__CTOR_OFFSET))(this);
	}
};
