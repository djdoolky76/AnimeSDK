#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class AAMKEDEDHPD_1;

#define FDPCDKLBEPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1713AED0)
#define FDPCDKLBEPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1713AD80)
#define FDPCDKLBEPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1713B0B0)
#define FDPCDKLBEPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1713AF20)

inline static constexpr unsigned int FDPCDKLBEPK_TypeDefinitionIndex = 81400;

class FDPCDKLBEPK : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::CPABOPKIGAL* BOHNBOELHDG; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* FJMNMKPGFIF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDKLBEPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDKLBEPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDPCDKLBEPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDKLBEPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
