#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define FGGOKBCFGDI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AC7350)
#define FGGOKBCFGDI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AC7200)
#define FGGOKBCFGDI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AC7600)
#define FGGOKBCFGDI__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC74D0)

inline static constexpr unsigned int FGGOKBCFGDI_TypeDefinitionIndex = 40649;

class FGGOKBCFGDI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* BJDBKHFJGEM; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* PBFKDKLAODE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGOKBCFGDI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGOKBCFGDI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FGGOKBCFGDI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGOKBCFGDI_GDEOPIBNOIN_OFFSET))(this);
	}
};
