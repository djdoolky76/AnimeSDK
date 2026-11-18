#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KBEDMPHOFCP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18A37630)
#define KBEDMPHOFCP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18A37560)
#define KBEDMPHOFCP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18A378A0)
#define KBEDMPHOFCP__CTOR_OFFSET UNITYSDK_OFFSET(0x18A377B0)

inline static constexpr unsigned int KBEDMPHOFCP_TypeDefinitionIndex = 45665;

class KBEDMPHOFCP : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* IMDFDLBIDGK; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEDMPHOFCP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEDMPHOFCP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KBEDMPHOFCP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBEDMPHOFCP_GDEOPIBNOIN_OFFSET))(this);
	}
};
