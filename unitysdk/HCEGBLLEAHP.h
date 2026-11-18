#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class AAMKEDEDHPD_1;

#define HCEGBLLEAHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F23400)
#define HCEGBLLEAHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F232B0)
#define HCEGBLLEAHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F23810)
#define HCEGBLLEAHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16F23680)

inline static constexpr unsigned int HCEGBLLEAHP_TypeDefinitionIndex = 74148;

class HCEGBLLEAHP : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* DPCHMADFCHE; // 0x28
	::CPABOPKIGAL* BOHNBOELHDG; // 0x30
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEGBLLEAHP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEGBLLEAHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HCEGBLLEAHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEGBLLEAHP_GDEOPIBNOIN_OFFSET))(this);
	}
};
