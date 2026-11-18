#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define FPPHLLOGEEG__CTOR_OFFSET UNITYSDK_OFFSET(0x125BB310)

inline static constexpr unsigned int FPPHLLOGEEG_TypeDefinitionIndex = 64456;

class FPPHLLOGEEG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPHLLOGEEG__CTOR_OFFSET))(this);
	}
};
