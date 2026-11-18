#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNKKCBKBILF.h"
#include "unitysdk/System/Object.h"

class KFNDABIHAMO;

#define GOLJHIDGNPD_GJAPGCNGDMP_CKJLKGKGOAA_OFFSET UNITYSDK_OFFSET(0x10FF9510)
#define GOLJHIDGNPD_GJAPGCNGDMP__CTOR_OFFSET UNITYSDK_OFFSET(0x10FF9500)

inline static constexpr unsigned int GOLJHIDGNPD_GJAPGCNGDMP_TypeDefinitionIndex = 61589;

class GOLJHIDGNPD_GJAPGCNGDMP : public ::System::Object
{
public:
	::MNKKCBKBILF OBNIAHNMHPF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLJHIDGNPD_GJAPGCNGDMP__CTOR_OFFSET))(this);
	}

	::System::Boolean CKJLKGKGOAA(::KFNDABIHAMO* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFNDABIHAMO*))((::PBYTE)hIl2Cpp + GOLJHIDGNPD_GJAPGCNGDMP_CKJLKGKGOAA_OFFSET))(this, LJBPECKCCEA);
	}
};
