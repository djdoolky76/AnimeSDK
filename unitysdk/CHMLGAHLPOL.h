#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define CHMLGAHLPOL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15334970)
#define CHMLGAHLPOL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153348E0)
#define CHMLGAHLPOL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15334D10)
#define CHMLGAHLPOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15334C70)

inline static constexpr unsigned int CHMLGAHLPOL_TypeDefinitionIndex = 44516;

class CHMLGAHLPOL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* LCMJFALEMJK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMLGAHLPOL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMLGAHLPOL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHMLGAHLPOL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMLGAHLPOL_GDEOPIBNOIN_OFFSET))(this);
	}
};
