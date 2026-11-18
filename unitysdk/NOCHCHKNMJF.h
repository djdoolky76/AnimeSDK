#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define NOCHCHKNMJF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x114B23D0)
#define NOCHCHKNMJF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x114B2340)
#define NOCHCHKNMJF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x114B26C0)
#define NOCHCHKNMJF__CTOR_OFFSET UNITYSDK_OFFSET(0x114B2620)

inline static constexpr unsigned int NOCHCHKNMJF_TypeDefinitionIndex = 59857;

class NOCHCHKNMJF : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCHCHKNMJF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCHCHKNMJF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NOCHCHKNMJF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCHCHKNMJF_GDEOPIBNOIN_OFFSET))(this);
	}
};
