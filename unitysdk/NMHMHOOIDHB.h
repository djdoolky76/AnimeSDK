#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define NMHMHOOIDHB__CTOR_OFFSET UNITYSDK_OFFSET(0xE59D600)

inline static constexpr unsigned int NMHMHOOIDHB_TypeDefinitionIndex = 43075;

class NMHMHOOIDHB : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHMHOOIDHB__CTOR_OFFSET))(this);
	}
};
