#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFJKMPLJACD.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define KCDAANKEJII_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13CE5530)
#define KCDAANKEJII_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13CE54A0)
#define KCDAANKEJII_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13CE5410)
#define KCDAANKEJII__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CE5390)
#define KCDAANKEJII__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE5400)

inline static constexpr unsigned int KCDAANKEJII_TypeDefinitionIndex = 41361;

class KCDAANKEJII : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xCB; // 0x0
	::EFJKMPLJACD LLEPLCNIGKE; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDAANKEJII__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDAANKEJII__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDAANKEJII_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDAANKEJII_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::EFJKMPLJACD KKMENMCMMBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::EFJKMPLJACD))((::PBYTE)hIl2Cpp + KCDAANKEJII_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, KKMENMCMMBN);
	}
};
