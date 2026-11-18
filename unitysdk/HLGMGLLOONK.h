#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/ODAHKHFOPDP.h"

#define HLGMGLLOONK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16F438B0)
#define HLGMGLLOONK_EFJHAKCCLLE_OFFSET UNITYSDK_OFFSET(0x16F43810)
#define HLGMGLLOONK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16F43950)
#define HLGMGLLOONK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16F43780)
#define HLGMGLLOONK__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F43700)
#define HLGMGLLOONK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F43770)

inline static constexpr unsigned int HLGMGLLOONK_TypeDefinitionIndex = 66532;

class HLGMGLLOONK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA6; // 0x0
	::System::Single PMLOGFLOLNJ; // 0x20
	::System::Single HBOJLFKAOOH; // 0x24
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x28
	::System::Boolean OKABBHMIOOM; // 0x2C
	::System::Byte _padding0[0x3];
	::ODAHKHFOPDP IGEBAIMAFHD; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLGMGLLOONK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGMGLLOONK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGMGLLOONK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void EFJHAKCCLLE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::ODAHKHFOPDP, ::System::Boolean))((::PBYTE)hIl2Cpp + HLGMGLLOONK_EFJHAKCCLLE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, DEPGNHMMDHL, ODNGLDNMAGF);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::Boolean ODNGLDNMAGF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::ODAHKHFOPDP, ::System::Boolean))((::PBYTE)hIl2Cpp + HLGMGLLOONK_CNHBDOMKKDE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, DEPGNHMMDHL, ODNGLDNMAGF);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLGMGLLOONK_FIGPAOKNJLN_OFFSET))(this);
	}
};
