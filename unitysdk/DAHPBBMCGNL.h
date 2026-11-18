#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define DAHPBBMCGNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1831EFF0)

inline static constexpr unsigned int DAHPBBMCGNL_TypeDefinitionIndex = 65255;

class DAHPBBMCGNL : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAHPBBMCGNL__CTOR_OFFSET))(this);
	}
};
