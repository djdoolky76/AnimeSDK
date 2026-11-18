#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPALNOKMFCB.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/ODAHKHFOPDP.h"
#include "unitysdk/System/ValueType.h"

#define JNPLBMFJFDI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x7678F0)
#define JNPLBMFJFDI_EFJHAKCCLLE_OFFSET UNITYSDK_OFFSET(0x767830)

inline static constexpr unsigned int JNPLBMFJFDI_TypeDefinitionIndex = 67582;

struct alignas(4) JNPLBMFJFDI
{
	::MoleMole::Config::PropertyModifyFunction HDCIHCKELCC; // 0x10
	::System::Single HBOJLFKAOOH; // 0x14
	::System::Single PMLOGFLOLNJ; // 0x18
	::System::Boolean OKABBHMIOOM; // 0x1C
	::System::Byte _padding0[0x3];
	::ODAHKHFOPDP IGEBAIMAFHD; // 0x20
	::FPALNOKMFCB LGMNKEIFIHN; // 0x24

	::System::Void EFJHAKCCLLE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::Boolean ODNGLDNMAGF, ::FPALNOKMFCB LGMNKEIFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::ODAHKHFOPDP, ::System::Boolean, ::FPALNOKMFCB))((::PBYTE)hIl2Cpp + JNPLBMFJFDI_EFJHAKCCLLE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, DEPGNHMMDHL, ODNGLDNMAGF, LGMNKEIFIHN);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::PropertyModifyFunction MDAMPAJOBBM, ::System::Single MFMMNDAHFAD, ::System::Single OICIDHAGAKN, ::ODAHKHFOPDP DEPGNHMMDHL, ::System::Boolean ODNGLDNMAGF, ::FPALNOKMFCB LGMNKEIFIHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::ODAHKHFOPDP, ::System::Boolean, ::FPALNOKMFCB))((::PBYTE)hIl2Cpp + JNPLBMFJFDI_CNHBDOMKKDE_OFFSET))(this, MDAMPAJOBBM, MFMMNDAHFAD, OICIDHAGAKN, DEPGNHMMDHL, ODNGLDNMAGF, LGMNKEIFIHN);
	}
};
