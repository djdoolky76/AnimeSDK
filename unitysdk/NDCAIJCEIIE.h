#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NDCAIJCEIIE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1ADFA9F0)
#define NDCAIJCEIIE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1ADFA960)
#define NDCAIJCEIIE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1ADFAAF0)
#define NDCAIJCEIIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFAA50)

inline static constexpr unsigned int NDCAIJCEIIE_TypeDefinitionIndex = 56511;

class NDCAIJCEIIE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* MOGOPONPALL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAIJCEIIE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAIJCEIIE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NDCAIJCEIIE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCAIJCEIIE_GDEOPIBNOIN_OFFSET))(this);
	}
};
