#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define ODHKMMLAGPL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1005DD00)
#define ODHKMMLAGPL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1005DC70)
#define ODHKMMLAGPL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1005DFA0)
#define ODHKMMLAGPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1005DF00)

inline static constexpr unsigned int ODHKMMLAGPL_TypeDefinitionIndex = 51189;

class ODHKMMLAGPL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* BKJOOIELICI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHKMMLAGPL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHKMMLAGPL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ODHKMMLAGPL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHKMMLAGPL_GDEOPIBNOIN_OFFSET))(this);
	}
};
