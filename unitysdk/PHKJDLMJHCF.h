#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PHKJDLMJHCF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16FCCFC0)
#define PHKJDLMJHCF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16FCCEF0)
#define PHKJDLMJHCF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16FCD1B0)
#define PHKJDLMJHCF__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCD0C0)

inline static constexpr unsigned int PHKJDLMJHCF_TypeDefinitionIndex = 78241;

class PHKJDLMJHCF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* ELAADEDGEIL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKJDLMJHCF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKJDLMJHCF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PHKJDLMJHCF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKJDLMJHCF_GDEOPIBNOIN_OFFSET))(this);
	}
};
