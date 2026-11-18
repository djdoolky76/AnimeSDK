#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;

#define GPPMPHICDEA_KDLNLJNIAEG_IHPNDEHPPMD_OFFSET UNITYSDK_OFFSET(0x13D780C0)
#define GPPMPHICDEA_KDLNLJNIAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D780B0)

inline static constexpr unsigned int GPPMPHICDEA_KDLNLJNIAEG_TypeDefinitionIndex = 42645;

class GPPMPHICDEA_KDLNLJNIAEG : public ::System::Object
{
public:
	::CALIGLPABNP* HCJNGPAPKNJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDLNLJNIAEG__CTOR_OFFSET))(this);
	}

	::System::Boolean IHPNDEHPPMD(::CALIGLPABNP* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KDLNLJNIAEG_IHPNDEHPPMD_OFFSET))(this, HAAEBCOBKFF);
	}
};
