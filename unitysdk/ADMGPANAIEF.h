#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ADMGPANAIEF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x134A8630)
#define ADMGPANAIEF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x134A84F0)
#define ADMGPANAIEF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x134A88F0)
#define ADMGPANAIEF__CTOR_OFFSET UNITYSDK_OFFSET(0x134A87D0)

inline static constexpr unsigned int ADMGPANAIEF_TypeDefinitionIndex = 59866;

class ADMGPANAIEF : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::AAMKEDEDHPD_1<::System::Single>* BDEJMKEEIBL; // 0x20
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* MFNJOLAMNCP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMGPANAIEF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMGPANAIEF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ADMGPANAIEF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMGPANAIEF_GDEOPIBNOIN_OFFSET))(this);
	}
};
