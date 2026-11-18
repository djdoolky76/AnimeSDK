#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define LENCBLECFJC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BD5F80)

inline static constexpr unsigned int LENCBLECFJC_TypeDefinitionIndex = 69179;

class LENCBLECFJC : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENCBLECFJC__CTOR_OFFSET))(this);
	}
};
