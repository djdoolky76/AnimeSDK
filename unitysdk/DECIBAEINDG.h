#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define DECIBAEINDG_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x7F6E0C0)
#define DECIBAEINDG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x7F6E050)
#define DECIBAEINDG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7F6DF00)
#define DECIBAEINDG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7F6E360)
#define DECIBAEINDG__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6E1D0)

inline static constexpr unsigned int DECIBAEINDG_TypeDefinitionIndex = 88260;

class DECIBAEINDG : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::CPABOPKIGAL* BOHNBOELHDG; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::System::Int32>*>* KCNICCAFFDH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIBAEINDG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIBAEINDG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DECIBAEINDG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECIBAEINDG_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DECIBAEINDG_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
