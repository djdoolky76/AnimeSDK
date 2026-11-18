#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MNBFJDJGPME_IIMCMPGKLEL;

#define MNBFJDJGPME_BLBOMJJPCGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B59AF0)
#define MNBFJDJGPME_BLBOMJJPCGJ_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x18B59BB0)
#define MNBFJDJGPME_BLBOMJJPCGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B59B80)

inline static constexpr unsigned int MNBFJDJGPME_BLBOMJJPCGJ_TypeDefinitionIndex = 77712;

class MNBFJDJGPME_BLBOMJJPCGJ : public ::System::Object
{
public:
	::MNBFJDJGPME_IIMCMPGKLEL* OIKFFMHNCHB; // 0x10
	::MNBFJDJGPME_IIMCMPGKLEL* BPLCIOFEHMK; // 0x18
	::MNBFJDJGPME_IIMCMPGKLEL* IBGAAPKHDMN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFJDJGPME_BLBOMJJPCGJ__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFJDJGPME_BLBOMJJPCGJ_DISPOSE_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBFJDJGPME_BLBOMJJPCGJ_JDAPDDEOCEA_OFFSET))(this);
	}
};
