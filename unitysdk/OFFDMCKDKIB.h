#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define OFFDMCKDKIB__CTOR_OFFSET UNITYSDK_OFFSET(0xE149F20)

inline static constexpr unsigned int OFFDMCKDKIB_TypeDefinitionIndex = 53175;

class OFFDMCKDKIB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFDMCKDKIB__CTOR_OFFSET))(this);
	}
};
