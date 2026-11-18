#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMBFIGBAENC.h"
#include "unitysdk/EKOEJOKOAEC.h"

namespace System { class Action; }

#define CABLKFIOBOB_HCNHNGKMJAB_OFFSET UNITYSDK_OFFSET(0x185928F0)
#define CABLKFIOBOB_KJDDAHNOEJP_OFFSET UNITYSDK_OFFSET(0x18592850)
#define CABLKFIOBOB_NLCENALKCKM_OFFSET UNITYSDK_OFFSET(0x18592840)
#define CABLKFIOBOB__CTOR_OFFSET UNITYSDK_OFFSET(0x185928E0)

inline static constexpr unsigned int CABLKFIOBOB_TypeDefinitionIndex = 38746;

class CABLKFIOBOB : public ::CMBFIGBAENC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLKFIOBOB__CTOR_OFFSET))(this);
	}

	::EKOEJOKOAEC NLCENALKCKM()
	{
		return ((::EKOEJOKOAEC(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLKFIOBOB_NLCENALKCKM_OFFSET))(this);
	}

	::System::Void KJDDAHNOEJP(::System::Action* NBCEOMOEKDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CABLKFIOBOB_KJDDAHNOEJP_OFFSET))(this, NBCEOMOEKDL);
	}

	::System::Void HCNHNGKMJAB(::System::Action* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CABLKFIOBOB_HCNHNGKMJAB_OFFSET))(this, MIALFKCCCPI);
	}
};
