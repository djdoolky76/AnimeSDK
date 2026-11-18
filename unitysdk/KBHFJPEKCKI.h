#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KBHFJPEKCKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13CDD9D0)
#define KBHFJPEKCKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13CDD900)
#define KBHFJPEKCKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13CDDBF0)
#define KBHFJPEKCKI__CTOR_OFFSET UNITYSDK_OFFSET(0x13CDDB00)

inline static constexpr unsigned int KBHFJPEKCKI_TypeDefinitionIndex = 80911;

class KBHFJPEKCKI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHFJPEKCKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHFJPEKCKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KBHFJPEKCKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHFJPEKCKI_GDEOPIBNOIN_OFFSET))(this);
	}
};
