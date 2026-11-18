#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LDCLCLKLIDB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15DEEE40)
#define LDCLCLKLIDB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15DEEE80)
#define LDCLCLKLIDB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15DEEDB0)
#define LDCLCLKLIDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DEED30)
#define LDCLCLKLIDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DEEDA0)

inline static constexpr unsigned int LDCLCLKLIDB_TypeDefinitionIndex = 48317;

class LDCLCLKLIDB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD9; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCLCLKLIDB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCLCLKLIDB__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCLCLKLIDB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCLCLKLIDB_CNHBDOMKKDE_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCLCLKLIDB_FIGPAOKNJLN_OFFSET))(this);
	}
};
