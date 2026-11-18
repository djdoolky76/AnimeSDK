#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJNFLFFJNMD.h"

class OMDAPGKMILG;

#define MNEFBIAJFII_FOCDKCOPFAG_OFFSET UNITYSDK_OFFSET(0x174ADD10)
#define MNEFBIAJFII__CTOR_OFFSET UNITYSDK_OFFSET(0x174ADDA0)

inline static constexpr unsigned int MNEFBIAJFII_TypeDefinitionIndex = 88095;

class MNEFBIAJFII : public ::JJNFLFFJNMD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEFBIAJFII__CTOR_OFFSET))(this);
	}

	::System::Boolean FOCDKCOPFAG(::OMDAPGKMILG* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::OMDAPGKMILG*))((::PBYTE)hIl2Cpp + MNEFBIAJFII_FOCDKCOPFAG_OFFSET))(this, LJBPECKCCEA);
	}
};
