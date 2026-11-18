#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CEAOAHEAAAI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128DD8F0)
#define CEAOAHEAAAI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x128DD860)
#define CEAOAHEAAAI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x128DDBD0)
#define CEAOAHEAAAI__CTOR_OFFSET UNITYSDK_OFFSET(0x128DDB30)

inline static constexpr unsigned int CEAOAHEAAAI_TypeDefinitionIndex = 46076;

class CEAOAHEAAAI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOAHEAAAI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOAHEAAAI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CEAOAHEAAAI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAOAHEAAAI_GDEOPIBNOIN_OFFSET))(this);
	}
};
