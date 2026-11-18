#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HACOGOHNFBO_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x15B397F0)
#define HACOGOHNFBO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15B39780)
#define HACOGOHNFBO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15B396F0)
#define HACOGOHNFBO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15B399F0)
#define HACOGOHNFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B39950)

inline static constexpr unsigned int HACOGOHNFBO_TypeDefinitionIndex = 69113;

class HACOGOHNFBO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AEOGCGACKBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACOGOHNFBO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACOGOHNFBO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HACOGOHNFBO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACOGOHNFBO_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HACOGOHNFBO_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
