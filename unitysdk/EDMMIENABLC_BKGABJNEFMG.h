#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FHPEOALHKDM.h"

#define EDMMIENABLC_BKGABJNEFMG_COMPARE_OFFSET UNITYSDK_OFFSET(0x10F21060)
#define EDMMIENABLC_BKGABJNEFMG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F210D0)

inline static constexpr unsigned int EDMMIENABLC_BKGABJNEFMG_TypeDefinitionIndex = 53783;

class EDMMIENABLC_BKGABJNEFMG : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_BKGABJNEFMG__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::FHPEOALHKDM HAAEBCOBKFF, ::FHPEOALHKDM BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::FHPEOALHKDM, ::FHPEOALHKDM))((::PBYTE)hIl2Cpp + EDMMIENABLC_BKGABJNEFMG_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
