#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/OHFIPDIIEHB_OPKBJOHGHMI.h"

#define OHFIPDIIEHB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15FE2350)
#define OHFIPDIIEHB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15FE22C0)
#define OHFIPDIIEHB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15FE2230)
#define OHFIPDIIEHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FE21B0)
#define OHFIPDIIEHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE2220)

inline static constexpr unsigned int OHFIPDIIEHB_TypeDefinitionIndex = 89713;

class OHFIPDIIEHB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x127; // 0x0
	::OHFIPDIIEHB_OPKBJOHGHMI NOOLOILNGPL; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHFIPDIIEHB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIPDIIEHB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIPDIIEHB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFIPDIIEHB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::OHFIPDIIEHB_OPKBJOHGHMI IMLLDOHDCNC)
	{
		return ((::System::Void(*)(::PVOID, ::OHFIPDIIEHB_OPKBJOHGHMI))((::PBYTE)hIl2Cpp + OHFIPDIIEHB_CNHBDOMKKDE_OFFSET))(this, IMLLDOHDCNC);
	}
};
