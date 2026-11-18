#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define MNJJNMKPPBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CAB3F0)
#define MNJJNMKPPBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CAB2A0)
#define MNJJNMKPPBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CAB860)
#define MNJJNMKPPBK__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAB6A0)

inline static constexpr unsigned int MNJJNMKPPBK_TypeDefinitionIndex = 56779;

class MNJJNMKPPBK : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* ENGNFMIEEDN; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* HOPLFFJHLIG; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* LGGHMJCPACP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJJNMKPPBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJJNMKPPBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MNJJNMKPPBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJJNMKPPBK_GDEOPIBNOIN_OFFSET))(this);
	}
};
