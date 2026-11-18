#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define EELHOLMBOHA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDD95F0)
#define EELHOLMBOHA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDD95A0)
#define EELHOLMBOHA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDD9690)
#define EELHOLMBOHA__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD9680)

inline static constexpr unsigned int EELHOLMBOHA_TypeDefinitionIndex = 84108;

class EELHOLMBOHA : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELHOLMBOHA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELHOLMBOHA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EELHOLMBOHA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELHOLMBOHA_GDEOPIBNOIN_OFFSET))(this);
	}
};
