#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/ODJHJCFOPAM.h"

namespace System { class String; }

#define DKFJCMCOION_CMMHFOPKIAH_OFFSET UNITYSDK_OFFSET(0x148AFDA0)
#define DKFJCMCOION_HHPFJINOFHI_OFFSET UNITYSDK_OFFSET(0x148AFB30)
#define DKFJCMCOION_JJCECLNIHEK_OFFSET UNITYSDK_OFFSET(0x148AFDB0)
#define DKFJCMCOION_JLHBKJKDGDE_OFFSET UNITYSDK_OFFSET(0x148AFCF0)
#define DKFJCMCOION_LDKLHJJIINL_OFFSET UNITYSDK_OFFSET(0x148AFDC0)
#define DKFJCMCOION_LJEEJABBAHD_OFFSET UNITYSDK_OFFSET(0x148AFD80)
#define DKFJCMCOION_PDPEPEFPPEG_OFFSET UNITYSDK_OFFSET(0x148AF970)
#define DKFJCMCOION__CTOR_OFFSET UNITYSDK_OFFSET(0x148AFD90)

inline static constexpr unsigned int DKFJCMCOION_TypeDefinitionIndex = 58441;

class DKFJCMCOION : public ::ODJHJCFOPAM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION__CTOR_OFFSET))(this);
	}

	::System::Boolean PDPEPEFPPEG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_PDPEPEFPPEG_OFFSET))(this);
	}

	::System::String* HHPFJINOFHI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_HHPFJINOFHI_OFFSET))(this);
	}

	::System::Void JLHBKJKDGDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_JLHBKJKDGDE_OFFSET))(this);
	}

	::MoleMole::ELocalPlayType LJEEJABBAHD()
	{
		return ((::MoleMole::ELocalPlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_LJEEJABBAHD_OFFSET))(this);
	}

	::System::Boolean CMMHFOPKIAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_CMMHFOPKIAH_OFFSET))(this);
	}

	::System::Void JJCECLNIHEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_JJCECLNIHEK_OFFSET))(this);
	}

	::System::String* LDKLHJJIINL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJCMCOION_LDKLHJJIINL_OFFSET))(this);
	}
};
