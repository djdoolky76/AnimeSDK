#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;

#define MKFNBHDICNJ_FPICGPIODLA_JGLGACAPJBP_OFFSET UNITYSDK_OFFSET(0x13195E90)
#define MKFNBHDICNJ_FPICGPIODLA__CTOR_OFFSET UNITYSDK_OFFSET(0x13195E80)

inline static constexpr unsigned int MKFNBHDICNJ_FPICGPIODLA_TypeDefinitionIndex = 61367;

class MKFNBHDICNJ_FPICGPIODLA : public ::System::Object
{
public:
	::System::Int32 HPBJCCLDANP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FPICGPIODLA__CTOR_OFFSET))(this);
	}

	::System::Boolean JGLGACAPJBP(::DJPEEJFNCHL* FGMNCNLGPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_FPICGPIODLA_JGLGACAPJBP_OFFSET))(this, FGMNCNLGPAP);
	}
};
