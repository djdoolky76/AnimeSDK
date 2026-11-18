#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define BDDPHLAABCP__CTOR_OFFSET UNITYSDK_OFFSET(0x14249E00)

inline static constexpr unsigned int BDDPHLAABCP_TypeDefinitionIndex = 52537;

class BDDPHLAABCP : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPHLAABCP__CTOR_OFFSET))(this);
	}
};
