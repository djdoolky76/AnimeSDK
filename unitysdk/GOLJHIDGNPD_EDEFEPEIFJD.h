#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFNDABIHAMO;

#define GOLJHIDGNPD_EDEFEPEIFJD_HMMHDFNFGFB_OFFSET UNITYSDK_OFFSET(0x125EF0E0)
#define GOLJHIDGNPD_EDEFEPEIFJD__CTOR_OFFSET UNITYSDK_OFFSET(0x125EF0D0)

inline static constexpr unsigned int GOLJHIDGNPD_EDEFEPEIFJD_TypeDefinitionIndex = 61587;

class GOLJHIDGNPD_EDEFEPEIFJD : public ::System::Object
{
public:
	::System::Int32 MGMDLMBEDJF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLJHIDGNPD_EDEFEPEIFJD__CTOR_OFFSET))(this);
	}

	::System::Boolean HMMHDFNFGFB(::KFNDABIHAMO* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFNDABIHAMO*))((::PBYTE)hIl2Cpp + GOLJHIDGNPD_EDEFEPEIFJD_HMMHDFNFGFB_OFFSET))(this, HAAEBCOBKFF);
	}
};
