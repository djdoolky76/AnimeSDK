#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define ANCFEBAKMMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x113C2B20)
#define ANCFEBAKMMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x113C2970)
#define ANCFEBAKMMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x113C2EE0)
#define ANCFEBAKMMN__CTOR_OFFSET UNITYSDK_OFFSET(0x113C2D80)

inline static constexpr unsigned int ANCFEBAKMMN_TypeDefinitionIndex = 80460;

class ANCFEBAKMMN : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* IAIGNDIOBAC; // 0x28
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* BLMGIBHMBGF; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* AEOKBAOODKG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFEBAKMMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFEBAKMMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ANCFEBAKMMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCFEBAKMMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
