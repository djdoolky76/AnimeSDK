#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/ODAHKHFOPDP.h"

#define FOHFNODDCPH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1750EBF0)
#define FOHFNODDCPH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1750EB60)
#define FOHFNODDCPH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1750E9D0)
#define FOHFNODDCPH_KHLHOPKBELP_OFFSET UNITYSDK_OFFSET(0x1750EA60)
#define FOHFNODDCPH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1750E950)
#define FOHFNODDCPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1750E9C0)

inline static constexpr unsigned int FOHFNODDCPH_TypeDefinitionIndex = 73906;

class FOHFNODDCPH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA1; // 0x0
	::System::UInt32 EKIBIPOBBAH; // 0x20
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x24
	::ODAHKHFOPDP IGEBAIMAFHD; // 0x28
	::System::Single HBOJLFKAOOH; // 0x2C
	::System::Boolean OKABBHMIOOM; // 0x30
	::System::Boolean FKBHALBMOKO; // 0x31
	::System::Boolean AEOEONPCABN; // 0x32
	::System::Boolean HCBBKIOLOGG; // 0x33
	::System::Byte _padding0[0x4];
	::System::Double PMLOGFLOLNJ; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOHFNODDCPH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHFNODDCPH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHFNODDCPH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void KHLHOPKBELP(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::System::Boolean ODNGLDNMAGF, ::System::Boolean LFACKJGLHFB, ::System::Boolean LAJMJGECJPO, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::UInt32 ENHBDNIPJCD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::ODAHKHFOPDP, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHFNODDCPH_KHLHOPKBELP_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, ODNGLDNMAGF, LFACKJGLHFB, LAJMJGECJPO, DEPGNHMMDHL, ENHBDNIPJCD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHFNODDCPH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Double OICIDHAGAKN, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::Boolean ODNGLDNMAGF, ::System::UInt32 ENHBDNIPJCD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double, ::ODAHKHFOPDP, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + FOHFNODDCPH_CNHBDOMKKDE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, DEPGNHMMDHL, ODNGLDNMAGF, ENHBDNIPJCD);
	}
};
