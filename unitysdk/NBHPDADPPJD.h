#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define NBHPDADPPJD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x120F1D30)
#define NBHPDADPPJD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x120F1CA0)
#define NBHPDADPPJD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x120F1F10)
#define NBHPDADPPJD__CTOR_OFFSET UNITYSDK_OFFSET(0x120F1E70)

inline static constexpr unsigned int NBHPDADPPJD_TypeDefinitionIndex = 72004;

class NBHPDADPPJD : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FANBHLFBOAF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHPDADPPJD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHPDADPPJD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBHPDADPPJD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHPDADPPJD_GDEOPIBNOIN_OFFSET))(this);
	}
};
