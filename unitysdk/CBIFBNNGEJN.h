#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define CBIFBNNGEJN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14780570)
#define CBIFBNNGEJN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x147804E0)
#define CBIFBNNGEJN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14780810)
#define CBIFBNNGEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x14780770)

inline static constexpr unsigned int CBIFBNNGEJN_TypeDefinitionIndex = 90584;

class CBIFBNNGEJN : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIFBNNGEJN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIFBNNGEJN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CBIFBNNGEJN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIFBNNGEJN_GDEOPIBNOIN_OFFSET))(this);
	}
};
