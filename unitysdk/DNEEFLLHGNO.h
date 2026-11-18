#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DNEEFLLHGNO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1587CD50)
#define DNEEFLLHGNO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1587CBA0)
#define DNEEFLLHGNO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1587D070)
#define DNEEFLLHGNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1587CF30)

inline static constexpr unsigned int DNEEFLLHGNO_TypeDefinitionIndex = 42958;

class DNEEFLLHGNO : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* HIFAJHJKOIH; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEEFLLHGNO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEEFLLHGNO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DNEEFLLHGNO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNEEFLLHGNO_GDEOPIBNOIN_OFFSET))(this);
	}
};
