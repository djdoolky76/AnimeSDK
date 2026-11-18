#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KFGJPFLHAJJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xD3F3280)
#define KFGJPFLHAJJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xD3F31F0)
#define KFGJPFLHAJJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xD3F3370)
#define KFGJPFLHAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F32D0)

inline static constexpr unsigned int KFGJPFLHAJJ_TypeDefinitionIndex = 65300;

class KFGJPFLHAJJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* IJLCBOFIKAO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJPFLHAJJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJPFLHAJJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KFGJPFLHAJJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGJPFLHAJJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
