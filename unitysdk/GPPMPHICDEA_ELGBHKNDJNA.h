#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;

#define GPPMPHICDEA_ELGBHKNDJNA_NIDFHEDGMBO_OFFSET UNITYSDK_OFFSET(0x15F43010)
#define GPPMPHICDEA_ELGBHKNDJNA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F43000)

inline static constexpr unsigned int GPPMPHICDEA_ELGBHKNDJNA_TypeDefinitionIndex = 42632;

class GPPMPHICDEA_ELGBHKNDJNA : public ::System::Object
{
public:
	::CALIGLPABNP* HCJNGPAPKNJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_ELGBHKNDJNA__CTOR_OFFSET))(this);
	}

	::System::Boolean NIDFHEDGMBO(::CALIGLPABNP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_ELGBHKNDJNA_NIDFHEDGMBO_OFFSET))(this, HAAEBCOBKFF);
	}
};
