#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define JCKLINGFDJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A50F70)
#define JCKLINGFDJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A50EE0)
#define JCKLINGFDJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A51240)
#define JCKLINGFDJE__CTOR_OFFSET UNITYSDK_OFFSET(0x14A511A0)

inline static constexpr unsigned int JCKLINGFDJE_TypeDefinitionIndex = 46708;

class JCKLINGFDJE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKLINGFDJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKLINGFDJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JCKLINGFDJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKLINGFDJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
