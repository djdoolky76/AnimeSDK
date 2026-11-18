#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define GHCCAGPCIBE__CTOR_OFFSET UNITYSDK_OFFSET(0x18141A70)

inline static constexpr unsigned int GHCCAGPCIBE_TypeDefinitionIndex = 89302;

class GHCCAGPCIBE : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCCAGPCIBE__CTOR_OFFSET))(this);
	}
};
