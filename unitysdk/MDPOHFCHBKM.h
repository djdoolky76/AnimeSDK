#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MDPOHFCHBKM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DDC540)
#define MDPOHFCHBKM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DDC400)
#define MDPOHFCHBKM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DDC6B0)
#define MDPOHFCHBKM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DDC590)

inline static constexpr unsigned int MDPOHFCHBKM_TypeDefinitionIndex = 71620;

class MDPOHFCHBKM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* JCACKMABDMN; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::System::String*>* MIILPGHGFHO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPOHFCHBKM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPOHFCHBKM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MDPOHFCHBKM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPOHFCHBKM_GDEOPIBNOIN_OFFSET))(this);
	}
};
