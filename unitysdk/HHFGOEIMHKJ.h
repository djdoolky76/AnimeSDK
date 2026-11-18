#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HHFGOEIMHKJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x16F376D0)
#define HHFGOEIMHKJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F37660)
#define HHFGOEIMHKJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F374B0)
#define HHFGOEIMHKJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F37AC0)
#define HHFGOEIMHKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16F37980)

inline static constexpr unsigned int HHFGOEIMHKJ_TypeDefinitionIndex = 77125;

class HHFGOEIMHKJ : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* ABFDCACIBDE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFGOEIMHKJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFGOEIMHKJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHFGOEIMHKJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHFGOEIMHKJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFGOEIMHKJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
