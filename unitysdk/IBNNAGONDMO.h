#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define IBNNAGONDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x141B72C0)

inline static constexpr unsigned int IBNNAGONDMO_TypeDefinitionIndex = 92379;

class IBNNAGONDMO : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNNAGONDMO__CTOR_OFFSET))(this);
	}
};
