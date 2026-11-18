#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define CCDNJAAMPEE__CTOR_OFFSET UNITYSDK_OFFSET(0x15314FD0)

inline static constexpr unsigned int CCDNJAAMPEE_TypeDefinitionIndex = 42893;

class CCDNJAAMPEE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDNJAAMPEE__CTOR_OFFSET))(this);
	}
};
