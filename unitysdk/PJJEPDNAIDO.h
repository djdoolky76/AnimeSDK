#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PJJEPDNAIDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CE880)

inline static constexpr unsigned int PJJEPDNAIDO_TypeDefinitionIndex = 91931;

class PJJEPDNAIDO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJEPDNAIDO__CTOR_OFFSET))(this);
	}
};
