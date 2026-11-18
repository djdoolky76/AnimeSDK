#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/NKKHFCPPPAF.h"

#define HFNGADNLOFG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x19E0D040)
#define HFNGADNLOFG_EALCGMDJEPC_OFFSET UNITYSDK_OFFSET(0x19E0D090)
#define HFNGADNLOFG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19E0D0D0)
#define HFNGADNLOFG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19E0CFB0)
#define HFNGADNLOFG__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E0CF30)
#define HFNGADNLOFG__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0CFA0)

inline static constexpr unsigned int HFNGADNLOFG_TypeDefinitionIndex = 60072;

class HFNGADNLOFG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x139; // 0x0
	::NKKHFCPPPAF KLNGPMIKHOH; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNGADNLOFG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNGADNLOFG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNGADNLOFG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::NKKHFCPPPAF CFMBGCMCNMM)
	{
		return ((::System::Void(*)(::PVOID, ::NKKHFCPPPAF))((::PBYTE)hIl2Cpp + HFNGADNLOFG_CNHBDOMKKDE_OFFSET))(this, CFMBGCMCNMM);
	}

	::NKKHFCPPPAF EALCGMDJEPC()
	{
		return ((::NKKHFCPPPAF(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNGADNLOFG_EALCGMDJEPC_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNGADNLOFG_FIGPAOKNJLN_OFFSET))(this);
	}
};
