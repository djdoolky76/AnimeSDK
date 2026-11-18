#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DJCHCMEFPIF.h"

class EGCGIAHBMKE_PIGAIGDHNLN;

#define EGCGIAHBMKE_LKLIMNBHNDN_NPBNEJPMMEL_OFFSET UNITYSDK_OFFSET(0x10634F90)
#define EGCGIAHBMKE_LKLIMNBHNDN__CTOR_OFFSET UNITYSDK_OFFSET(0x10634F80)

inline static constexpr unsigned int EGCGIAHBMKE_LKLIMNBHNDN_TypeDefinitionIndex = 90811;

class EGCGIAHBMKE_LKLIMNBHNDN : public ::System::Object
{
public:
	::EGCGIAHBMKE_PIGAIGDHNLN* FGBNBFHOKAA; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCGIAHBMKE_LKLIMNBHNDN__CTOR_OFFSET))(this);
	}

	::System::Boolean NPBNEJPMMEL(::DJCHCMEFPIF IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJCHCMEFPIF))((::PBYTE)hIl2Cpp + EGCGIAHBMKE_LKLIMNBHNDN_NPBNEJPMMEL_OFFSET))(this, IPMMCGDMODG);
	}
};
