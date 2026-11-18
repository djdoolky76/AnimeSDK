#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define IKDDJIJFJGE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A27DC0)
#define IKDDJIJFJGE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A27D30)
#define IKDDJIJFJGE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A28050)
#define IKDDJIJFJGE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A27FB0)

inline static constexpr unsigned int IKDDJIJFJGE_TypeDefinitionIndex = 43889;

class IKDDJIJFJGE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDDJIJFJGE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDDJIJFJGE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IKDDJIJFJGE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDDJIJFJGE_GDEOPIBNOIN_OFFSET))(this);
	}
};
