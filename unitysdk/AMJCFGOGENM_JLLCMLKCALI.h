#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMJCFGOGENM_KDFGEBABGGC;

#define AMJCFGOGENM_JLLCMLKCALI_PFFCNFPMIOM_OFFSET UNITYSDK_OFFSET(0x135F65A0)
#define AMJCFGOGENM_JLLCMLKCALI__CTOR_OFFSET UNITYSDK_OFFSET(0x135F6590)

inline static constexpr unsigned int AMJCFGOGENM_JLLCMLKCALI_TypeDefinitionIndex = 92759;

class AMJCFGOGENM_JLLCMLKCALI : public ::System::Object
{
public:
	::System::Int32 GFKCABHFFEE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_JLLCMLKCALI__CTOR_OFFSET))(this);
	}

	::System::Boolean PFFCNFPMIOM(::AMJCFGOGENM_KDFGEBABGGC* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::AMJCFGOGENM_KDFGEBABGGC*))((::PBYTE)hIl2Cpp + AMJCFGOGENM_JLLCMLKCALI_PFFCNFPMIOM_OFFSET))(this, HAAEBCOBKFF);
	}
};
