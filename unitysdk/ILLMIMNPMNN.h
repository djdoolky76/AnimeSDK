#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class AAMKEDEDHPD_1;

#define ILLMIMNPMNN_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x197DA850)
#define ILLMIMNPMNN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x197DA7E0)
#define ILLMIMNPMNN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x197DA630)
#define ILLMIMNPMNN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x197DABC0)
#define ILLMIMNPMNN__CTOR_OFFSET UNITYSDK_OFFSET(0x197DA9F0)

inline static constexpr unsigned int ILLMIMNPMNN_TypeDefinitionIndex = 44289;

class ILLMIMNPMNN : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* EGPFPIJFBJF; // 0x28
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x30
	::AAMKEDEDHPD_1<::System::Int32>* BAFNCELHJKN; // 0x38
	::CPABOPKIGAL* BOHNBOELHDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLMIMNPMNN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLMIMNPMNN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ILLMIMNPMNN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ILLMIMNPMNN_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLMIMNPMNN_GDEOPIBNOIN_OFFSET))(this);
	}
};
