#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

class LCFJODEFJKI;
class MOFJBAHMGCC;

#define OODABJNGCHB_EKFIOEMPJLI_HODHEPNHHMM_OFFSET UNITYSDK_OFFSET(0x1E248DB0)
#define OODABJNGCHB_EKFIOEMPJLI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E248DA0)

inline static constexpr unsigned int OODABJNGCHB_EKFIOEMPJLI_TypeDefinitionIndex = 93502;

class OODABJNGCHB_EKFIOEMPJLI : public ::System::Object
{
public:
	::JGLIFHIAIEH JLNIFKHFEFB; // 0x10
	::System::Boolean DMFGDMOLGMN; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single HFCLGHFFPIH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODABJNGCHB_EKFIOEMPJLI__CTOR_OFFSET))(this);
	}

	::System::Void HODHEPNHHMM(::LCFJODEFJKI* MLIENFCPCHN, ::MOFJBAHMGCC* GKODDNGEIDN)
	{
		return ((::System::Void(*)(::PVOID, ::LCFJODEFJKI*, ::MOFJBAHMGCC*))((::PBYTE)hIl2Cpp + OODABJNGCHB_EKFIOEMPJLI_HODHEPNHHMM_OFFSET))(this, MLIENFCPCHN, GKODDNGEIDN);
	}
};
