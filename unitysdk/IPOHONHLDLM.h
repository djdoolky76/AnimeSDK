#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IPOHONHLDLM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A3F050)
#define IPOHONHLDLM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A3EFC0)
#define IPOHONHLDLM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A3F2E0)
#define IPOHONHLDLM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3F240)

inline static constexpr unsigned int IPOHONHLDLM_TypeDefinitionIndex = 49473;

class IPOHONHLDLM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOHONHLDLM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOHONHLDLM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IPOHONHLDLM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOHONHLDLM_GDEOPIBNOIN_OFFSET))(this);
	}
};
