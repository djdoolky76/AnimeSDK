#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/ODAHKHFOPDP.h"
#include "unitysdk/System/ValueType.h"

#define KDMGNLLDLIJ_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x7AA8D0)
#define KDMGNLLDLIJ_KHLHOPKBELP_OFFSET UNITYSDK_OFFSET(0x7AA780)

inline static constexpr unsigned int KDMGNLLDLIJ_TypeDefinitionIndex = 54298;

struct alignas(4) KDMGNLLDLIJ
{
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x10
	::System::Single HBOJLFKAOOH; // 0x14
	::System::Double PMLOGFLOLNJ; // 0x18
	::System::Boolean OKABBHMIOOM; // 0x20
	::System::Boolean HCBBKIOLOGG; // 0x21
	::System::Boolean FKBHALBMOKO; // 0x22
	::System::Boolean AEOEONPCABN; // 0x23
	::ODAHKHFOPDP IGEBAIMAFHD; // 0x24
	::System::UInt32 ECPKFEBFELJ; // 0x28
	::System::Byte _padding0[0x4];
	::System::Double GEDDPMNHIAF; // 0x30
	::System::Boolean DLAKDBFAIOA; // 0x38

	::System::Void KHLHOPKBELP(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::System::Boolean ODNGLDNMAGF, ::System::Boolean LFACKJGLHFB, ::System::Boolean LAJMJGECJPO, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::UInt32 ENHBDNIPJCD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::ODAHKHFOPDP, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMGNLLDLIJ_KHLHOPKBELP_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, ODNGLDNMAGF, LFACKJGLHFB, LAJMJGECJPO, DEPGNHMMDHL, ENHBDNIPJCD);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Double OICIDHAGAKN, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::Boolean ODNGLDNMAGF, ::System::UInt32 ENHBDNIPJCD, ::System::Boolean OOPEDBIFIPC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double, ::ODAHKHFOPDP, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMGNLLDLIJ_CNHBDOMKKDE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, DEPGNHMMDHL, ODNGLDNMAGF, ENHBDNIPJCD, OOPEDBIFIPC);
	}
};
