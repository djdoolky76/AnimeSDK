#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBGGDKBCNMO.h"
#include "unitysdk/NFAPDCFMANE.h"

#define OLPMCFPFKFE_GIHKAABJAFI_OFFSET UNITYSDK_OFFSET(0x16F84F50)
#define OLPMCFPFKFE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F84F60)

inline static constexpr unsigned int OLPMCFPFKFE_TypeDefinitionIndex = 84586;

class OLPMCFPFKFE : public ::NFAPDCFMANE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPMCFPFKFE__CTOR_OFFSET))(this);
	}

	::JBGGDKBCNMO GIHKAABJAFI()
	{
		return ((::JBGGDKBCNMO(*)(::PVOID))((::PBYTE)hIl2Cpp + OLPMCFPFKFE_GIHKAABJAFI_OFFSET))(this);
	}
};
