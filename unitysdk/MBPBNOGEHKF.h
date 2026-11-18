#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define MBPBNOGEHKF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E1C9F0)
#define MBPBNOGEHKF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E1C910)
#define MBPBNOGEHKF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E1CE60)
#define MBPBNOGEHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1CD70)

inline static constexpr unsigned int MBPBNOGEHKF_TypeDefinitionIndex = 82882;

class MBPBNOGEHKF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* IPCHGCIJHKM; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* CPMBKEMGBIF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBNOGEHKF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBNOGEHKF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MBPBNOGEHKF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPBNOGEHKF_GDEOPIBNOIN_OFFSET))(this);
	}
};
