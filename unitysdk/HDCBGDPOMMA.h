#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HDCBGDPOMMA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1100B230)
#define HDCBGDPOMMA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1100B0F0)
#define HDCBGDPOMMA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1100B790)
#define HDCBGDPOMMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1100B670)

inline static constexpr unsigned int HDCBGDPOMMA_TypeDefinitionIndex = 84393;

class HDCBGDPOMMA : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x20
	::KCMIFNGABDC_1<::System::String*>* GNJKHDBFAFL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCBGDPOMMA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCBGDPOMMA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HDCBGDPOMMA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCBGDPOMMA_GDEOPIBNOIN_OFFSET))(this);
	}
};
