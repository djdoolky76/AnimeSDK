#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define HMMFKGGEPBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15DC9CE0)
#define HMMFKGGEPBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15DC9C50)
#define HMMFKGGEPBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15DC9FB0)
#define HMMFKGGEPBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC9F10)

inline static constexpr unsigned int HMMFKGGEPBK_TypeDefinitionIndex = 70852;

class HMMFKGGEPBK : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* HGOMIIFHJLI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMFKGGEPBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMFKGGEPBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HMMFKGGEPBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMFKGGEPBK_GDEOPIBNOIN_OFFSET))(this);
	}
};
