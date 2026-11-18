#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define JOEIGICHKBL_LJKOEMIIDHP_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x187538F0)
#define JOEIGICHKBL_LJKOEMIIDHP__CTOR_OFFSET UNITYSDK_OFFSET(0x18753770)

inline static constexpr unsigned int JOEIGICHKBL_LJKOEMIIDHP_TypeDefinitionIndex = 88215;

class JOEIGICHKBL_LJKOEMIIDHP : public ::System::Object
{
public:
	::HOCDHMEPPEG MKGINGALGCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOEIGICHKBL_LJKOEMIIDHP__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JOEIGICHKBL_LJKOEMIIDHP_LIDNPLMPHAL_OFFSET))(this, BHDNBGLCNOM);
	}
};
