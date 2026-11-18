#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define BDOLEMLOPMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFF678F0)
#define BDOLEMLOPMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFF677B0)
#define BDOLEMLOPMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFF67B10)
#define BDOLEMLOPMN__CTOR_OFFSET UNITYSDK_OFFSET(0xFF67A10)

inline static constexpr unsigned int BDOLEMLOPMN_TypeDefinitionIndex = 66202;

class BDOLEMLOPMN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* DOINPIMIPNM; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLEMLOPMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLEMLOPMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BDOLEMLOPMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOLEMLOPMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
