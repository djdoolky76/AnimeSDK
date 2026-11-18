#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EBFEJOOEGOF_BEDGKPELGOF_OFFSET UNITYSDK_OFFSET(0x13498690)
#define EBFEJOOEGOF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13498610)
#define EBFEJOOEGOF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13498540)
#define EBFEJOOEGOF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13499470)
#define EBFEJOOEGOF__CTOR_OFFSET UNITYSDK_OFFSET(0x13499380)

inline static constexpr unsigned int EBFEJOOEGOF_TypeDefinitionIndex = 85767;

class EBFEJOOEGOF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFEJOOEGOF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFEJOOEGOF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EBFEJOOEGOF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean BEDGKPELGOF(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EBFEJOOEGOF_BEDGKPELGOF_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFEJOOEGOF_GDEOPIBNOIN_OFFSET))(this);
	}
};
