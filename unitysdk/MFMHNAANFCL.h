#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MFMHNAANFCL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14DE05A0)
#define MFMHNAANFCL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14DE0460)
#define MFMHNAANFCL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14DE0890)
#define MFMHNAANFCL__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE0790)

inline static constexpr unsigned int MFMHNAANFCL_TypeDefinitionIndex = 89473;

class MFMHNAANFCL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* ENMEIJPEPDB; // 0x20
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMHNAANFCL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMHNAANFCL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MFMHNAANFCL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMHNAANFCL_GDEOPIBNOIN_OFFSET))(this);
	}
};
