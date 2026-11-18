#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class NJDHJGDFLDI;
template <typename T> class KCMIFNGABDC_1;

#define BNMFGLPHIMJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18586A40)
#define BNMFGLPHIMJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18586960)
#define BNMFGLPHIMJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18586F30)
#define BNMFGLPHIMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18586E80)

inline static constexpr unsigned int BNMFGLPHIMJ_TypeDefinitionIndex = 87999;

class BNMFGLPHIMJ : public ::MHMFINLCNFN
{
public:
	::NJDHJGDFLDI* KBJPABNJOOM; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMFGLPHIMJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMFGLPHIMJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNMFGLPHIMJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMFGLPHIMJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
