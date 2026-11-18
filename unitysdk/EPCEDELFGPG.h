#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPPFKDCPPKM.h"

#define EPCEDELFGPG__CTOR_OFFSET UNITYSDK_OFFSET(0x16169960)

inline static constexpr unsigned int EPCEDELFGPG_TypeDefinitionIndex = 92980;

class EPCEDELFGPG : public ::CPPFKDCPPKM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCEDELFGPG__CTOR_OFFSET))(this);
	}
};
