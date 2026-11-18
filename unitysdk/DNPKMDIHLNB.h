#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DNPKMDIHLNB__CTOR_OFFSET UNITYSDK_OFFSET(0x10F17350)

inline static constexpr unsigned int DNPKMDIHLNB_TypeDefinitionIndex = 44534;

class DNPKMDIHLNB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPKMDIHLNB__CTOR_OFFSET))(this);
	}
};
