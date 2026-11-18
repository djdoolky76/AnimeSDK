#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CHMBLFGIFBO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x139C9580)
#define CHMBLFGIFBO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x139C9370)
#define CHMBLFGIFBO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x139C9E80)
#define CHMBLFGIFBO__CTOR_OFFSET UNITYSDK_OFFSET(0x139C9C70)

inline static constexpr unsigned int CHMBLFGIFBO_TypeDefinitionIndex = 80166;

class CHMBLFGIFBO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x30
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x38
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x40
	::CPABOPKIGAL* BOHNBOELHDG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMBLFGIFBO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMBLFGIFBO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHMBLFGIFBO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHMBLFGIFBO_GDEOPIBNOIN_OFFSET))(this);
	}
};
