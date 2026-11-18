#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKIBLDBNEJK;

#define PIJAKOPBKMD_HPONOMGJFEP_LLHMCODIPOP_OFFSET UNITYSDK_OFFSET(0x178D7EE0)
#define PIJAKOPBKMD_HPONOMGJFEP__CTOR_OFFSET UNITYSDK_OFFSET(0x178D7770)

inline static constexpr unsigned int PIJAKOPBKMD_HPONOMGJFEP_TypeDefinitionIndex = 52680;

class PIJAKOPBKMD_HPONOMGJFEP : public ::System::Object
{
public:
	::System::Int32 AOLFNAENNHC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIJAKOPBKMD_HPONOMGJFEP__CTOR_OFFSET))(this);
	}

	::System::Boolean LLHMCODIPOP(::BKIBLDBNEJK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BKIBLDBNEJK*))((::PBYTE)hIl2Cpp + PIJAKOPBKMD_HPONOMGJFEP_LLHMCODIPOP_OFFSET))(this, HAAEBCOBKFF);
	}
};
