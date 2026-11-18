#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLDMNJMOLLN_CJBGEDGHFJG.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define ICDJAGFOPHD_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x140D8470)
#define ICDJAGFOPHD_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x140D8550)
#define ICDJAGFOPHD_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x140D83E0)
#define ICDJAGFOPHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x140D8360)
#define ICDJAGFOPHD__CTOR_OFFSET UNITYSDK_OFFSET(0x140D83D0)

inline static constexpr unsigned int ICDJAGFOPHD_TypeDefinitionIndex = 42499;

class ICDJAGFOPHD : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x58; // 0x0
	::System::UInt32 NMPJMCCBNLO; // 0x20
	::System::Single PFDDJJOELBA; // 0x24
	::System::Single HODDBKJIAEG; // 0x28
	::BLDMNJMOLLN_CJBGEDGHFJG FLDLPFNMDLK; // 0x2C
	::System::Boolean HCDICEECPCC; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICDJAGFOPHD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDJAGFOPHD__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDJAGFOPHD_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 NMPJMCCBNLO, ::System::UInt32 JHGKGEGGGFF, ::System::Single HODDBKJIAEG, ::System::Single PFDDJJOELBA, ::System::Boolean MHJCLAOKJHP, ::BLDMNJMOLLN_CJBGEDGHFJG JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single, ::System::Single, ::System::Boolean, ::BLDMNJMOLLN_CJBGEDGHFJG))((::PBYTE)hIl2Cpp + ICDJAGFOPHD_CNHBDOMKKDE_OFFSET))(this, NMPJMCCBNLO, JHGKGEGGGFF, HODDBKJIAEG, PFDDJJOELBA, MHJCLAOKJHP, JKBLDFBGBPK);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICDJAGFOPHD_FIGPAOKNJLN_OFFSET))(this);
	}
};
