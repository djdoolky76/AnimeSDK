#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MKBBPOFGLOF;

#define LMBIAHBLBGB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1850FDC0)
#define LMBIAHBLBGB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1850FD30)
#define LMBIAHBLBGB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18510070)
#define LMBIAHBLBGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1850FFB0)

inline static constexpr unsigned int LMBIAHBLBGB_TypeDefinitionIndex = 91862;

class LMBIAHBLBGB : public ::MHMFINLCNFN
{
public:
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBIAHBLBGB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBIAHBLBGB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LMBIAHBLBGB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBIAHBLBGB_GDEOPIBNOIN_OFFSET))(this);
	}
};
