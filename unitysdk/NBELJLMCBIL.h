#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NBELJLMCBIL_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x105A9710)
#define NBELJLMCBIL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x105A9690)
#define NBELJLMCBIL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x105A9490)
#define NBELJLMCBIL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x105AA760)
#define NBELJLMCBIL__CTOR_OFFSET UNITYSDK_OFFSET(0x105AA5C0)

inline static constexpr unsigned int NBELJLMCBIL_TypeDefinitionIndex = 76183;

class NBELJLMCBIL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Single>* KPJEKHCKPCL; // 0x20
	::KCMIFNGABDC_1<::System::Single>* FKBIDLHCPMF; // 0x28
	::KCMIFNGABDC_1<::System::Single>* OEPGDKNIAKM; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBELJLMCBIL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBELJLMCBIL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBELJLMCBIL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean BGJPLEHEDKJ(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBELJLMCBIL_BGJPLEHEDKJ_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBELJLMCBIL_GDEOPIBNOIN_OFFSET))(this);
	}
};
