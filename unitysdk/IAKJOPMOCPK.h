#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define IAKJOPMOCPK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xEA0FCA0)
#define IAKJOPMOCPK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEA0FC10)
#define IAKJOPMOCPK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEA0FD90)
#define IAKJOPMOCPK__CTOR_OFFSET UNITYSDK_OFFSET(0xEA0FCF0)

inline static constexpr unsigned int IAKJOPMOCPK_TypeDefinitionIndex = 73157;

class IAKJOPMOCPK : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FHGFOACNDPF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKJOPMOCPK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKJOPMOCPK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IAKJOPMOCPK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKJOPMOCPK_GDEOPIBNOIN_OFFSET))(this);
	}
};
