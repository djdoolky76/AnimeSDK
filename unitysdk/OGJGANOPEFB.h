#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBDCJLOPPJO.h"

class AJAMLAJJNHA;
class HCCENGOKNDB;
class LFMCFDBPNIF;

#define OGJGANOPEFB_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x16C129F0)
#define OGJGANOPEFB_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x16C12D90)
#define OGJGANOPEFB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C12930)

inline static constexpr unsigned int OGJGANOPEFB_TypeDefinitionIndex = 89004;

class OGJGANOPEFB : public ::BBDCJLOPPJO
{
public:
	::HCCENGOKNDB* LOIPDHCJMDJ; // 0x50
	::LFMCFDBPNIF* JLAAONJOMJJ; // 0x58

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + OGJGANOPEFB__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGANOPEFB_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJGANOPEFB_OFINMOFKGFI_OFFSET))(this);
	}
};
