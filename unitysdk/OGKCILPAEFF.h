#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBGGDKBCNMO.h"
#include "unitysdk/NFAPDCFMANE.h"

#define OGKCILPAEFF_GIHKAABJAFI_OFFSET UNITYSDK_OFFSET(0x15F6BF50)
#define OGKCILPAEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6BF60)

inline static constexpr unsigned int OGKCILPAEFF_TypeDefinitionIndex = 51406;

class OGKCILPAEFF : public ::NFAPDCFMANE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKCILPAEFF__CTOR_OFFSET))(this);
	}

	::JBGGDKBCNMO GIHKAABJAFI()
	{
		return ((::JBGGDKBCNMO(*)(::PVOID))((::PBYTE)hIl2Cpp + OGKCILPAEFF_GIHKAABJAFI_OFFSET))(this);
	}
};
