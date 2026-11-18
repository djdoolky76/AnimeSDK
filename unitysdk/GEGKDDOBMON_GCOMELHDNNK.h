#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGFIENDHNMB;

#define GEGKDDOBMON_GCOMELHDNNK_FALJCLMBCJB_OFFSET UNITYSDK_OFFSET(0x15F16930)
#define GEGKDDOBMON_GCOMELHDNNK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16920)

inline static constexpr unsigned int GEGKDDOBMON_GCOMELHDNNK_TypeDefinitionIndex = 58065;

class GEGKDDOBMON_GCOMELHDNNK : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_GCOMELHDNNK__CTOR_OFFSET))(this);
	}

	::System::Boolean FALJCLMBCJB(::GGFIENDHNMB* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::GGFIENDHNMB*))((::PBYTE)hIl2Cpp + GEGKDDOBMON_GCOMELHDNNK_FALJCLMBCJB_OFFSET))(this, HAAEBCOBKFF);
	}
};
