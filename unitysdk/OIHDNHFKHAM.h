#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/LGKJFOFLBFG.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"

#define OIHDNHFKHAM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0xE153020)
#define OIHDNHFKHAM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xE152F90)
#define OIHDNHFKHAM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xE152F00)
#define OIHDNHFKHAM__CCTOR_OFFSET UNITYSDK_OFFSET(0xE152E80)
#define OIHDNHFKHAM__CTOR_OFFSET UNITYSDK_OFFSET(0xE152EF0)

inline static constexpr unsigned int OIHDNHFKHAM_TypeDefinitionIndex = 78489;

class OIHDNHFKHAM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x99; // 0x0
	::System::UInt32 KODHKJGAHHC; // 0x20
	::LGKJFOFLBFG MGHEOLIIENH; // 0x24
	::System::UInt32 BHPBPJCDHHG; // 0x28
	::MoleMole::Config::AidAttackType GBGLFPMEHKG; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIHDNHFKHAM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHDNHFKHAM__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHDNHFKHAM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHDNHFKHAM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::UInt32 BHPBPJCDHHG, ::System::UInt32 KODHKJGAHHC, ::LGKJFOFLBFG IEHPBAPHCOM, ::MoleMole::Config::AidAttackType ONLHMFMOEDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::LGKJFOFLBFG, ::MoleMole::Config::AidAttackType))((::PBYTE)hIl2Cpp + OIHDNHFKHAM_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, BHPBPJCDHHG, KODHKJGAHHC, IEHPBAPHCOM, ONLHMFMOEDH);
	}
};
