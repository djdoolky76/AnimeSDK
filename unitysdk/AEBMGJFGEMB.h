#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/KFIEJHHKEOL.h"

class EOGCDNPHKDI;
class JKHNCKENNKN;
class LIODIJELAAE;

#define AEBMGJFGEMB_ICOELJNGAPB_OFFSET UNITYSDK_OFFSET(0x1ED64EB0)
#define AEBMGJFGEMB_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x1ED64E30)
#define AEBMGJFGEMB_MHBDNIJPBOG_OFFSET UNITYSDK_OFFSET(0x1ED64EC0)
#define AEBMGJFGEMB_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1ED648A0)
#define AEBMGJFGEMB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1ED64B70)
#define AEBMGJFGEMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED64EA0)

inline static constexpr unsigned int AEBMGJFGEMB_TypeDefinitionIndex = 94378;

class AEBMGJFGEMB : public ::KFIEJHHKEOL
{
public:
	::LIODIJELAAE* GGIABPNFAEJ; // 0x60
	::EOGCDNPHKDI* LNEEMAGIHLB; // 0x68
	::JKHNCKENNKN* GJKKPBCJGHD; // 0x70
	::JGLIFHIAIEH DAAEHEHLLLD; // 0x78
	::System::UInt32 _ONJLBBNGNOE_k__BackingField; // 0x80
	::System::Int32 DCEOBAPNGIK; // 0x84
	::System::Single CFGGJAMPNGN; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBMGJFGEMB__CTOR_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBMGJFGEMB_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AEBMGJFGEMB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LGAFACFIAGI(::System::Boolean MBEMOHDDEMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEBMGJFGEMB_LGAFACFIAGI_OFFSET))(this, MBEMOHDDEMA);
	}

	::System::UInt32 ICOELJNGAPB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBMGJFGEMB_ICOELJNGAPB_OFFSET))(this);
	}

	::System::Void MHBDNIJPBOG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AEBMGJFGEMB_MHBDNIJPBOG_OFFSET))(this, EGEGIMGMJHN);
	}
};
