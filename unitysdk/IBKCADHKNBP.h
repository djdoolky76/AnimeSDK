#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define IBKCADHKNBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A394750)
#define IBKCADHKNBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A3946C0)
#define IBKCADHKNBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A394940)
#define IBKCADHKNBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3948A0)

inline static constexpr unsigned int IBKCADHKNBP_TypeDefinitionIndex = 81769;

class IBKCADHKNBP : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* JAJFFGCLBJJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKCADHKNBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKCADHKNBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IBKCADHKNBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBKCADHKNBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
