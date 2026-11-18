#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KJNOOEPAELK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A2CD620)
#define KJNOOEPAELK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A2CD4D0)
#define KJNOOEPAELK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A2CDA50)
#define KJNOOEPAELK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2CD920)

inline static constexpr unsigned int KJNOOEPAELK_TypeDefinitionIndex = 52469;

class KJNOOEPAELK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x30
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNOOEPAELK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNOOEPAELK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KJNOOEPAELK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNOOEPAELK_GDEOPIBNOIN_OFFSET))(this);
	}
};
