#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PMHOPKBHJKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7FEE70)

inline static constexpr unsigned int PMHOPKBHJKI_TypeDefinitionIndex = 70435;

class PMHOPKBHJKI : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHOPKBHJKI__CTOR_OFFSET))(this);
	}
};
