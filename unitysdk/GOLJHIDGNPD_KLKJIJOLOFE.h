#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFNDABIHAMO;

#define GOLJHIDGNPD_KLKJIJOLOFE_BOECKNAIEFD_OFFSET UNITYSDK_OFFSET(0x17ADD010)
#define GOLJHIDGNPD_KLKJIJOLOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADD000)

inline static constexpr unsigned int GOLJHIDGNPD_KLKJIJOLOFE_TypeDefinitionIndex = 61588;

class GOLJHIDGNPD_KLKJIJOLOFE : public ::System::Object
{
public:
	::System::Int32 OGDNGAMKFDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLJHIDGNPD_KLKJIJOLOFE__CTOR_OFFSET))(this);
	}

	::System::Boolean BOECKNAIEFD(::KFNDABIHAMO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFNDABIHAMO*))((::PBYTE)hIl2Cpp + GOLJHIDGNPD_KLKJIJOLOFE_BOECKNAIEFD_OFFSET))(this, HAAEBCOBKFF);
	}
};
