#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define PFPPPFEGGOD__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC9B60)

inline static constexpr unsigned int PFPPPFEGGOD_TypeDefinitionIndex = 86359;

class PFPPPFEGGOD : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPPFEGGOD__CTOR_OFFSET))(this);
	}
};
