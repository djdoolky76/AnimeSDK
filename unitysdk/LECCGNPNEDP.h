#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LECCGNPNEDP_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x14D9F560)
#define LECCGNPNEDP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15811480)
#define LECCGNPNEDP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x158113F0)
#define LECCGNPNEDP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D9F980)
#define LECCGNPNEDP__CTOR_OFFSET UNITYSDK_OFFSET(0x15811500)

inline static constexpr unsigned int LECCGNPNEDP_TypeDefinitionIndex = 50633;

class LECCGNPNEDP : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECCGNPNEDP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECCGNPNEDP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LECCGNPNEDP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean BGJPLEHEDKJ(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LECCGNPNEDP_BGJPLEHEDKJ_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECCGNPNEDP_GDEOPIBNOIN_OFFSET))(this);
	}
};
