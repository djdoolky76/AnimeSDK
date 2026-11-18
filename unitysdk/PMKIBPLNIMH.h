#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define PMKIBPLNIMH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x178ED680)
#define PMKIBPLNIMH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x178ED5F0)
#define PMKIBPLNIMH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x178ED560)
#define PMKIBPLNIMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x178ED4E0)
#define PMKIBPLNIMH__CTOR_OFFSET UNITYSDK_OFFSET(0x178ED550)

inline static constexpr unsigned int PMKIBPLNIMH_TypeDefinitionIndex = 92207;

class PMKIBPLNIMH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x11B; // 0x0
	::System::UInt32 MGNMJMACKLO; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMKIBPLNIMH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKIBPLNIMH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKIBPLNIMH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMKIBPLNIMH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMKIBPLNIMH_CNHBDOMKKDE_OFFSET))(this, AOCOIDIMLIH);
	}
};
