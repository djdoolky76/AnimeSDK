#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;

#define MBJPMNNPDAC_DPBMAIGGDPL_MHLOICEOLEN_OFFSET UNITYSDK_OFFSET(0x18523A20)
#define MBJPMNNPDAC_DPBMAIGGDPL__CTOR_OFFSET UNITYSDK_OFFSET(0x18523A10)

inline static constexpr unsigned int MBJPMNNPDAC_DPBMAIGGDPL_TypeDefinitionIndex = 62294;

class MBJPMNNPDAC_DPBMAIGGDPL : public ::System::Object
{
public:
	::CALIGLPABNP* GEOIKCKELBN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJPMNNPDAC_DPBMAIGGDPL__CTOR_OFFSET))(this);
	}

	::System::Boolean MHLOICEOLEN(::CALIGLPABNP* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + MBJPMNNPDAC_DPBMAIGGDPL_MHLOICEOLEN_OFFSET))(this, DFMKILICPFB);
	}
};
