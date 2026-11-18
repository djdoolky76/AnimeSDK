#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define HIJCAHJPCGP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A4C640)
#define HIJCAHJPCGP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A4C5B0)
#define HIJCAHJPCGP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A4CAC0)
#define HIJCAHJPCGP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A4CA20)

inline static constexpr unsigned int HIJCAHJPCGP_TypeDefinitionIndex = 65912;

class HIJCAHJPCGP : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EFIJGFCFOJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCAHJPCGP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCAHJPCGP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HIJCAHJPCGP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCAHJPCGP_GDEOPIBNOIN_OFFSET))(this);
	}
};
