#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define GPLLLONOEED_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10FFB150)
#define GPLLLONOEED_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10FFB0C0)
#define GPLLLONOEED_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10FFB3E0)
#define GPLLLONOEED__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFB340)

inline static constexpr unsigned int GPLLLONOEED_TypeDefinitionIndex = 69759;

class GPLLLONOEED : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FLGJKPLGPAJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLLLONOEED__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLLLONOEED_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GPLLLONOEED_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLLLONOEED_GDEOPIBNOIN_OFFSET))(this);
	}
};
