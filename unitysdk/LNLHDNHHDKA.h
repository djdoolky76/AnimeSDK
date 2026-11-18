#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/OJEABMGNEDJ.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LNLHDNHHDKA_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x18512180)
#define LNLHDNHHDKA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x185120F0)
#define LNLHDNHHDKA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18511F40)
#define LNLHDNHHDKA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18512450)
#define LNLHDNHHDKA__CTOR_OFFSET UNITYSDK_OFFSET(0x18512310)

inline static constexpr unsigned int LNLHDNHHDKA_TypeDefinitionIndex = 59780;

class LNLHDNHHDKA : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* EJJHNOBJBGA; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLHDNHHDKA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLHDNHHDKA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LNLHDNHHDKA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::OJEABMGNEDJ ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::OJEABMGNEDJ(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LNLHDNHHDKA_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLHDNHHDKA_GDEOPIBNOIN_OFFSET))(this);
	}
};
