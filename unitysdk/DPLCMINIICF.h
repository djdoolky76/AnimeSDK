#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DPLCMINIICF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10614DC0)
#define DPLCMINIICF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10614C70)
#define DPLCMINIICF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10615110)
#define DPLCMINIICF__CTOR_OFFSET UNITYSDK_OFFSET(0x10614FE0)

inline static constexpr unsigned int DPLCMINIICF_TypeDefinitionIndex = 85218;

class DPLCMINIICF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AGMGKEIBOIO; // 0x28
	::KCMIFNGABDC_1<::System::String*>* EECMOKDLPKJ; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* PJBPPNMJALC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCMINIICF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCMINIICF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DPLCMINIICF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLCMINIICF_GDEOPIBNOIN_OFFSET))(this);
	}
};
