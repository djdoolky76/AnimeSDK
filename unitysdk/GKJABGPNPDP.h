#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define GKJABGPNPDP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CCEF80)
#define GKJABGPNPDP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CCED80)
#define GKJABGPNPDP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CCF450)
#define GKJABGPNPDP__CTOR_OFFSET UNITYSDK_OFFSET(0x16CCF280)

inline static constexpr unsigned int GKJABGPNPDP_TypeDefinitionIndex = 84438;

class GKJABGPNPDP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* IGJKIOKPKAP; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::MKBBPOFGLOF* ILKADOGGDAC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* DNNLKKIBKCO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJABGPNPDP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJABGPNPDP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GKJABGPNPDP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJABGPNPDP_GDEOPIBNOIN_OFFSET))(this);
	}
};
