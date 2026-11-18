#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCJLOPPJO.h"

class AJAMLAJJNHA;
class AJEJMDEKBCE;

#define NCOBONKFOLP_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x120F4E20)
#define NCOBONKFOLP_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x120F50B0)
#define NCOBONKFOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x120F4D80)

inline static constexpr unsigned int NCOBONKFOLP_TypeDefinitionIndex = 39623;

class NCOBONKFOLP : public ::BBDCJLOPPJO
{
public:
	::AJEJMDEKBCE* FJPIOJFLCKP; // 0x50

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + NCOBONKFOLP__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOBONKFOLP_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOBONKFOLP_OFINMOFKGFI_OFFSET))(this);
	}
};
