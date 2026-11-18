#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EINHPNMFDBK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11A89450)
#define EINHPNMFDBK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11A892A0)
#define EINHPNMFDBK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11A89800)
#define EINHPNMFDBK__CTOR_OFFSET UNITYSDK_OFFSET(0x11A896C0)

inline static constexpr unsigned int EINHPNMFDBK_TypeDefinitionIndex = 79232;

class EINHPNMFDBK : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::AAMKEDEDHPD_1<::System::String*>* MKHOIFNMHBF; // 0x20
	::CPABOPKIGAL* MMFNFINOFPN; // 0x28
	::KCMIFNGABDC_1<::System::String*>* LMNHHJOGDPL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINHPNMFDBK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINHPNMFDBK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EINHPNMFDBK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EINHPNMFDBK_GDEOPIBNOIN_OFFSET))(this);
	}
};
