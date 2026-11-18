#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define DENNLEKKOEN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12BAEE90)
#define DENNLEKKOEN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12BAED40)
#define DENNLEKKOEN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12BAF400)
#define DENNLEKKOEN__CTOR_OFFSET UNITYSDK_OFFSET(0x12BAF180)

inline static constexpr unsigned int DENNLEKKOEN_TypeDefinitionIndex = 85363;

class DENNLEKKOEN : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* BOHNBOELHDG; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::CPABOPKIGAL* GFPOFNEEMBL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DENNLEKKOEN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNLEKKOEN_GDEOPIBNOIN_OFFSET))(this);
	}
};
