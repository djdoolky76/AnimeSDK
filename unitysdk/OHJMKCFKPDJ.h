#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

class PBIHJEGJPGD;

#define OHJMKCFKPDJ_BFEMEELGKAI_OFFSET UNITYSDK_OFFSET(0x16C16F90)
#define OHJMKCFKPDJ_EDLLMCEPFGJ_OFFSET UNITYSDK_OFFSET(0x16C17160)
#define OHJMKCFKPDJ_FBFPKKDAPLL_OFFSET UNITYSDK_OFFSET(0x16C171B0)
#define OHJMKCFKPDJ_KKELFCJHCAO_OFFSET UNITYSDK_OFFSET(0x16C16DF0)
#define OHJMKCFKPDJ_LIGKPLBGKIG_OFFSET UNITYSDK_OFFSET(0x16C17390)
#define OHJMKCFKPDJ_MPKEJNFMFCI_OFFSET UNITYSDK_OFFSET(0x16C16AB0)
#define OHJMKCFKPDJ_PDENGDMJAIH_OFFSET UNITYSDK_OFFSET(0x16C17240)
#define OHJMKCFKPDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16C16AA0)

inline static constexpr unsigned int OHJMKCFKPDJ_TypeDefinitionIndex = 62748;

class OHJMKCFKPDJ : public ::System::Object
{
public:
	::PBIHJEGJPGD* LFOHODONBIL; // 0x10

	::System::Void _ctor(::PBIHJEGJPGD* IONJNNHMDAB)
	{
		return ((::System::Void(*)(::PVOID, ::PBIHJEGJPGD*))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ__CTOR_OFFSET))(this, IONJNNHMDAB);
	}

	::System::Void MPKEJNFMFCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_MPKEJNFMFCI_OFFSET))(this);
	}

	::System::Void KKELFCJHCAO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_KKELFCJHCAO_OFFSET))(this);
	}

	::System::Void BFEMEELGKAI(::System::Boolean ADHCINEEDEO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_BFEMEELGKAI_OFFSET))(this, ADHCINEEDEO);
	}

	::System::Void EDLLMCEPFGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_EDLLMCEPFGJ_OFFSET))(this);
	}

	::System::Void FBFPKKDAPLL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_FBFPKKDAPLL_OFFSET))(this);
	}

	::System::Void PDENGDMJAIH(::System::UInt32 BCCCMFIGOOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_PDENGDMJAIH_OFFSET))(this, BCCCMFIGOOI);
	}

	::System::Void LIGKPLBGKIG(::GHCAHMCCPML FKMHMOELCIO)
	{
		return ((::System::Void(*)(::PVOID, ::GHCAHMCCPML))((::PBYTE)hIl2Cpp + OHJMKCFKPDJ_LIGKPLBGKIG_OFFSET))(this, FKMHMOELCIO);
	}
};
