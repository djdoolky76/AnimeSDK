#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define BHINGJCHKHP_KPAHMBFPJAO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x115E9AD0)
#define BHINGJCHKHP_KPAHMBFPJAO__CTOR_OFFSET UNITYSDK_OFFSET(0x115E9AC0)

inline static constexpr unsigned int BHINGJCHKHP_KPAHMBFPJAO_TypeDefinitionIndex = 67743;

class BHINGJCHKHP_KPAHMBFPJAO : public ::System::Object
{
public:
	::HOCDHMEPPEG MKGINGALGCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHINGJCHKHP_KPAHMBFPJAO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + BHINGJCHKHP_KPAHMBFPJAO_LIDNPLMPHAL_OFFSET))(this, BHDNBGLCNOM);
	}
};
