#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GIPDMBFNFKI__CTOR_OFFSET UNITYSDK_OFFSET(0x125D3EA0)

inline static constexpr unsigned int GIPDMBFNFKI_TypeDefinitionIndex = 58969;

class GIPDMBFNFKI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPDMBFNFKI__CTOR_OFFSET))(this);
	}
};
