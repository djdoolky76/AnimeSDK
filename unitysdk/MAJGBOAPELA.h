#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define MAJGBOAPELA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E15F60)

inline static constexpr unsigned int MAJGBOAPELA_TypeDefinitionIndex = 52976;

class MAJGBOAPELA : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJGBOAPELA__CTOR_OFFSET))(this);
	}
};
