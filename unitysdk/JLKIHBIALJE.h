#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPICNDJAPFN.h"

class LNPEBGNBKMF;

#define JLKIHBIALJE_CJBCHJLHELG_OFFSET UNITYSDK_OFFSET(0x1D3EDD00)
#define JLKIHBIALJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EDCC0)

inline static constexpr unsigned int JLKIHBIALJE_TypeDefinitionIndex = 93437;

class JLKIHBIALJE : public ::OPICNDJAPFN
{
public:
	::System::UInt64 AFKGODNDGDI; // 0x40

	::System::Void _ctor(::LNPEBGNBKMF* JLLAMEIACCM)
	{
		return ((::System::Void(*)(::PVOID, ::LNPEBGNBKMF*))((::PBYTE)hIl2Cpp + JLKIHBIALJE__CTOR_OFFSET))(this, JLLAMEIACCM);
	}

	::System::Void CJBCHJLHELG(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLKIHBIALJE_CJBCHJLHELG_OFFSET))(this, PMNLNNGEIFM);
	}
};
