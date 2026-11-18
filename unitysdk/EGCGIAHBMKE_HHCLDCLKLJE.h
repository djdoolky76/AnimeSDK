#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DJCHCMEFPIF.h"

class EGCGIAHBMKE_PIGAIGDHNLN;

#define EGCGIAHBMKE_HHCLDCLKLJE_AJPKPPFFNGJ_OFFSET UNITYSDK_OFFSET(0x158A4A70)
#define EGCGIAHBMKE_HHCLDCLKLJE__CTOR_OFFSET UNITYSDK_OFFSET(0x158A1E40)

inline static constexpr unsigned int EGCGIAHBMKE_HHCLDCLKLJE_TypeDefinitionIndex = 90816;

class EGCGIAHBMKE_HHCLDCLKLJE : public ::System::Object
{
public:
	::EGCGIAHBMKE_PIGAIGDHNLN* EEMOEMFLABI; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCGIAHBMKE_HHCLDCLKLJE__CTOR_OFFSET))(this);
	}

	::System::Boolean AJPKPPFFNGJ(::DJCHCMEFPIF IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + EGCGIAHBMKE_HHCLDCLKLJE_AJPKPPFFNGJ_OFFSET))(this, IPMMCGDMODG);
	}
};
